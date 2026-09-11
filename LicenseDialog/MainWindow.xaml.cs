using System;
using System.Windows;
using System.Windows.Media;

namespace LicenseDialog
{
    public partial class MainWindow : Window
    {
        // ── Reproductor de música ──────────────────────────────────
        private readonly MediaPlayer _player = new MediaPlayer();

        // ── Ruta del archivo de música ─────────────────────────────
        // Coloca tu .mp3 o .wav en la carpeta del ejecutable
        // y cambia el nombre aquí:
        private const string MusicFileName = "background.mp3";

        // ──────────────────────────────────────────────────────────
        public MainWindow()
        {
            InitializeComponent();
        }

        // ── Evento al cargar la ventana ────────────────────────────
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            InitMusic();
        }

        // ── Inicializar y reproducir música en bucle ───────────────
        private void InitMusic()
        {
            string musicPath = System.IO.Path.Combine(
                AppDomain.CurrentDomain.BaseDirectory,
                MusicFileName
            );

            if (!System.IO.File.Exists(musicPath))
            {
                // No hay archivo de música — continúa sin error
                return;
            }

            _player.Open(new Uri(musicPath, UriKind.Absolute));
            _player.Volume = 0.5;   // 50 % de volumen
            _player.Play();

            // Al terminar la canción, vuelve al inicio (bucle)
            _player.MediaEnded += (s, e) =>
            {
                _player.Position = TimeSpan.Zero;
                _player.Play();
            };
        }

        // ── Botón: Validate Key ────────────────────────────────────
        private void ValidateKey_Click(object sender, RoutedEventArgs e)
        {
            string key = LicenseKeyBox.Text.Trim();

            if (string.IsNullOrEmpty(key))
            {
                SubscriptionInfo.Text = "No key entered.";
                return;
            }

            // Aquí va tu lógica de validación real.
            // Ejemplo simple: clave demo válida.
            if (key.Equals("DEMO-1234-ABCD", StringComparison.OrdinalIgnoreCase))
            {
                SubscriptionInfo.Text = "✔ Valid key.\nSubscription: Developer Edition";
                SubscriptionInfo.Foreground = new SolidColorBrush(Color.FromRgb(0, 128, 0));
            }
            else
            {
                SubscriptionInfo.Text = "✘ Invalid or unrecognized key.";
                SubscriptionInfo.Foreground = new SolidColorBrush(Color.FromRgb(180, 0, 0));
            }
        }

        // ── Botón: Print License ───────────────────────────────────
        private void PrintLicense_Click(object sender, RoutedEventArgs e)
        {
            MessageBox.Show(
                "Printing license terms...\n(Connect this to PrintDialog for producción real.)",
                "Print License",
                MessageBoxButton.OK,
                MessageBoxImage.Information
            );
        }

        // ── Botón: I Accept ────────────────────────────────────────
        private void IAccept_Click(object sender, RoutedEventArgs e)
        {
            _player.Stop();

            // Avanza el progreso a 100 %
            InstallProgress.Value = 100;
            Step3Label.Text       = "Step 3: License Accepted ✔";

            MessageBox.Show(
                "Thank you for accepting the license terms.\nInstallation will now continue.",
                "License Accepted",
                MessageBoxButton.OK,
                MessageBoxImage.Information
            );

            // Cierra (o lanza la siguiente ventana del instalador)
            this.Close();
        }

        // ── Botón: Cancel ──────────────────────────────────────────
        private void Cancel_Click(object sender, RoutedEventArgs e)
        {
            var result = MessageBox.Show(
                "Are you sure you want to cancel the installation?",
                "Cancel Installation",
                MessageBoxButton.YesNo,
                MessageBoxImage.Warning
            );

            if (result == MessageBoxResult.Yes)
            {
                _player.Stop();
                Application.Current.Shutdown();
            }
        }

        // ── Liberar recursos al cerrar ─────────────────────────────
        protected override void OnClosed(EventArgs e)
        {
            _player.Stop();
            _player.Close();
            base.OnClosed(e);
        }
    }
}
