#include <iostream>
#include <gtkmm-3.0/gtkmm.h>

// Main function
int main(int argc, char** argv) {
    // UI components
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "com.github.locxter.chngclcltr");
    Gtk::Window window;
    Gtk::Grid grid;
    Gtk::Label priceLabel("Price:");
    Gtk::SpinButton priceSpinButton(Gtk::Adjustment::create(10, 0.01, 1000, 0.01), 0.01, 2);
    Gtk::Label moneyGivenLabel("Money given:");
    Gtk::SpinButton moneyGivenSpinButton(Gtk::Adjustment::create(10, 0.01, 1000, 0.01), 0.01, 2);
    Gtk::Button calculateButton("Calculate");
    Gtk::Label changeLabel("Change:");
    Gtk::Label numberOf500EuroNotesLabel("500 Euro notes:");
    Gtk::Label numberOf200EuroNotesLabel("200 Euro notes:");
    Gtk::Label numberOf100EuroNotesLabel("100 Euro notes:");
    Gtk::Label numberOf50EuroNotesLabel("50 Euro notes:");
    Gtk::Label numberOf20EuroNotesLabel("20 Euro notes:");
    Gtk::Label numberOf10EuroNotesLabel("10 Euro notes:");
    Gtk::Label numberOf5EuroNotesLabel("5 Euro notes:");
    Gtk::Label numberOf2EuroCoinsLabel("2 Euro coins:");
    Gtk::Label numberOf1EuroCoinsLabel("1 Euro coins:");
    Gtk::Label numberOf50CentCoinsLabel("50 Cent coins:");
    Gtk::Label numberOf20CentCoinsLabel("20 Cent coins:");
    Gtk::Label numberOf10CentCoinsLabel("10 Cent coins:");
    Gtk::Label numberOf5CentCoinsLabel("5 Cent coins:");
    Gtk::Label numberOf2CentCoinsLabel("2 Cent coins:");
    Gtk::Label numberOf1CentCoinsLabel("1 Cent coins:");
    Gtk::Label aboutLabel("2022 locxter");
    // Add function to the button
    calculateButton.signal_clicked().connect([&]() {
        int price = std::round(priceSpinButton.get_value() * 100);
        int moneyGiven = std::round(moneyGivenSpinButton.get_value() * 100);
        if (moneyGiven >= price) {
            int change = moneyGiven - price;
            std::string changeString = std::to_string(change / 100.0);
            changeLabel.set_text("Change: " + changeString.substr(0, changeString.size() - 4));
            numberOf500EuroNotesLabel.set_text("500 Euro notes: " + std::to_string(change / 50000));
            change -= (change / 50000) * 50000;
            numberOf200EuroNotesLabel.set_text("200 Euro notes: " + std::to_string(change / 20000));
            change -= (change / 20000) * 20000;
            numberOf100EuroNotesLabel.set_text("100 Euro notes: " + std::to_string(change / 10000));
            change -= (change / 10000) * 10000;
            numberOf50EuroNotesLabel.set_text("50 Euro notes: " + std::to_string(change / 5000));
            change -= (change / 5000) * 5000;
            numberOf20EuroNotesLabel.set_text("20 Euro notes: " + std::to_string(change / 2000));
            change -= (change / 2000) * 2000;
            numberOf10EuroNotesLabel.set_text("10 Euro notes: " + std::to_string(change / 1000));
            change -= (change / 1000) * 1000;
            numberOf5EuroNotesLabel.set_text("5 Euro notes: " + std::to_string(change / 500));
            change -= (change / 500) * 500;
            numberOf2EuroCoinsLabel.set_text("2 Euro coins: " + std::to_string(change / 200));
            change -= (change / 200) * 200;
            numberOf1EuroCoinsLabel.set_text("1 Euro coins: " + std::to_string(change / 100));
            change -= (change / 100) * 100;
            numberOf50CentCoinsLabel.set_text("50 Cent coins: " + std::to_string(change / 50));
            change -= (change / 50) * 50;
            numberOf20CentCoinsLabel.set_text("20 Cent coins: " + std::to_string(change / 20));
            change -= (change / 20) * 20;
            numberOf10CentCoinsLabel.set_text("10 Cent coins: " + std::to_string(change / 10));
            change -= (change / 10) * 10;
            numberOf5CentCoinsLabel.set_text("5 Cent coins: " + std::to_string(change / 5));
            change -= (change / 5) * 5;
            numberOf2CentCoinsLabel.set_text("2 Cent coins: " + std::to_string(change / 2));
            change -= (change / 2) * 2;
            numberOf1CentCoinsLabel.set_text("1 Cent coins: " + std::to_string(change / 1));
        } else {
            changeLabel.set_text("Change");
            numberOf500EuroNotesLabel.set_text("500 Euro notes:");
            numberOf200EuroNotesLabel.set_text("200 Euro notes:");
            numberOf100EuroNotesLabel.set_text("100 Euro notes:");
            numberOf50EuroNotesLabel.set_text("50 Euro notes:");
            numberOf20EuroNotesLabel.set_text("20 Euro notes:");
            numberOf10EuroNotesLabel.set_text("10 Euro notes:");
            numberOf5EuroNotesLabel.set_text("5 Euro notes:");
            numberOf2EuroCoinsLabel.set_text("2 Euro coins:");
            numberOf1EuroCoinsLabel.set_text("1 Euro coins:");
            numberOf50CentCoinsLabel.set_text("50 Cent coins:");
            numberOf20CentCoinsLabel.set_text("20 Cent coins:");
            numberOf10CentCoinsLabel.set_text("10 Cent coins:");
            numberOf5CentCoinsLabel.set_text("5 Cent coins:");
            numberOf2CentCoinsLabel.set_text("2 Cent coins:");
            numberOf1CentCoinsLabel.set_text("1 Cent coins:");
        }
    });
    // Create the main grid
    grid.set_column_spacing(10);
    grid.set_row_spacing(10);
    grid.set_valign(Gtk::Align::ALIGN_CENTER);
    priceLabel.set_hexpand(true);
    grid.attach(priceLabel, 0, 0);
    priceSpinButton.set_hexpand(true);
    grid.attach(priceSpinButton, 1, 0);
    moneyGivenLabel.set_hexpand(true);
    grid.attach(moneyGivenLabel, 0, 1);
    moneyGivenSpinButton.set_hexpand(true);
    grid.attach(moneyGivenSpinButton, 1, 1);
    calculateButton.set_hexpand(true);
    grid.attach(calculateButton, 0, 2, 2);
    changeLabel.set_hexpand(true);
    grid.attach(changeLabel, 0, 3, 2);
    numberOf500EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf500EuroNotesLabel, 0, 4, 2);
    numberOf200EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf200EuroNotesLabel, 0, 5, 2);
    numberOf100EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf100EuroNotesLabel, 0, 6, 2);
    numberOf50EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf50EuroNotesLabel, 0, 7, 2);
    numberOf20EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf20EuroNotesLabel, 0, 8, 2);
    numberOf10EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf10EuroNotesLabel, 0, 9, 2);
    numberOf5EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf5EuroNotesLabel, 0, 10, 2);
    numberOf2EuroCoinsLabel.set_hexpand(true);
    grid.attach(numberOf2EuroCoinsLabel, 0, 11, 2);
    numberOf1EuroCoinsLabel.set_hexpand(true);
    grid.attach(numberOf1EuroCoinsLabel, 0, 12, 2);
    numberOf50CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf50CentCoinsLabel, 0, 13, 2);
    numberOf20CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf20CentCoinsLabel, 0, 14, 2);
    numberOf10CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf10CentCoinsLabel, 0, 15, 2);
    numberOf5CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf5CentCoinsLabel, 0, 16, 2);
    numberOf2CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf2CentCoinsLabel, 0, 17, 2);
    numberOf1CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf1CentCoinsLabel, 0, 18, 2);
    aboutLabel.set_hexpand(true);
    grid.attach(aboutLabel, 0, 19, 2);
    // Create the main window
    window.set_title("chngclcltr");
    window.set_border_width(10);
    window.set_default_size(320, 640);
    window.add(grid);
    window.show_all();
    return app->run(window);
}