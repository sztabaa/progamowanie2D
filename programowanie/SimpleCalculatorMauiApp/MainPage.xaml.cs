
namespace SimpleCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
           InitializeObject();
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            if (!int.TryParse(firstNumberEntry.Text, out int firstNumber)
                 || !int.TryParse(firstNumberEntry.Text, out int secondNumber))
                return;
            int result = firstNumber + secondNumber;

            resultLabel.Text = $"Wynik to {result}";
        }
    }
}
