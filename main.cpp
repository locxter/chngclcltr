#include <iostream>
#include <gtkmm-3.0/gtkmm.h>

// Main function
int main(int argc, char** argv) {
    // UI components
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create("com.github.locxter.chngclcltr");
    Gtk::Window window;
    Gtk::Grid grid;
    Gtk::Label priceLabel("Price:");
    Gtk::SpinButton priceInput(Gtk::Adjustment::create(0, 0.01, 1000, 0.01), 0.01, 2);
    Gtk::Label moneyGivenLabel("Money given:");
    Gtk::SpinButton moneyGivenInput(Gtk::Adjustment::create(0, 0.01, 1000, 0.01), 0.01, 2);
    Gtk::Button calculateButton("Calculate");
    Gtk::Label changeLabel("Change:");
    Gtk::Label changeData;
    Gtk::Label numberOf500EuroNotesLabel("500 Euro notes:");
    Gtk::Label numberOf500EuroNotesData;
    Gtk::Label numberOf200EuroNotesLabel("200 Euro notes:");
    Gtk::Label numberOf200EuroNotesData;
    Gtk::Label numberOf100EuroNotesLabel("100 Euro notes:");
    Gtk::Label numberOf100EuroNotesData;
    Gtk::Label numberOf50EuroNotesLabel("50 Euro notes:");
    Gtk::Label numberOf50EuroNotesData;
    Gtk::Label numberOf20EuroNotesLabel("20 Euro notes:");
    Gtk::Label numberOf20EuroNotesData;
    Gtk::Label numberOf10EuroNotesLabel("10 Euro notes:");
    Gtk::Label numberOf10EuroNotesData;
    Gtk::Label numberOf5EuroNotesLabel("5 Euro notes:");
    Gtk::Label numberOf5EuroNotesData;
    Gtk::Label numberOf2EuroCoinsLabel("2 Euro coins:");
    Gtk::Label numberOf2EuroCoinsData;
    Gtk::Label numberOf1EuroCoinsLabel("1 Euro coins:");
    Gtk::Label numberOf1EuroCoinsData;
    Gtk::Label numberOf50CentCoinsLabel("50 Cent coins:");
    Gtk::Label numberOf50CentCoinsData;
    Gtk::Label numberOf20CentCoinsLabel("20 Cent coins:");
    Gtk::Label numberOf20CentCoinsData;
    Gtk::Label numberOf10CentCoinsLabel("10 Cent coins:");
    Gtk::Label numberOf10CentCoinsData;
    Gtk::Label numberOf5CentCoinsLabel("5 Cent coins:");
    Gtk::Label numberOf5CentCoinsData;
    Gtk::Label numberOf2CentCoinsLabel("2 Cent coins:");
    Gtk::Label numberOf2CentCoinsData;
    Gtk::Label numberOf1CentCoinsLabel("1 Cent coins:");
    Gtk::Label numberOf1CentCoinsData;
    Gtk::Label aboutLabel("2022 locxter");
    // Add function to the button
    calculateButton.signal_clicked().connect([&]() {
        int price = std::round(priceInput.get_value() * 100);
        int moneyGiven = std::round(moneyGivenInput.get_value() * 100);
        int change = moneyGiven - price;
        if (change >= 0) {
            std::string changeString = std::to_string(change / 100.0);
            changeData.set_text(changeString.substr(0, changeString.size() - 4));
            numberOf500EuroNotesData.set_text(std::to_string(change / 50000));
            change -= (change / 50000) * 50000;
            numberOf200EuroNotesData.set_text(std::to_string(change / 20000));
            change -= (change / 20000) * 20000;
            numberOf100EuroNotesData.set_text(std::to_string(change / 10000));
            change -= (change / 10000) * 10000;
            numberOf50EuroNotesData.set_text(std::to_string(change / 5000));
            change -= (change / 5000) * 5000;
            numberOf20EuroNotesData.set_text(std::to_string(change / 2000));
            change -= (change / 2000) * 2000;
            numberOf10EuroNotesData.set_text(std::to_string(change / 1000));
            change -= (change / 1000) * 1000;
            numberOf5EuroNotesData.set_text(std::to_string(change / 500));
            change -= (change / 500) * 500;
            numberOf2EuroCoinsData.set_text(std::to_string(change / 200));
            change -= (change / 200) * 200;
            numberOf1EuroCoinsData.set_text(std::to_string(change / 100));
            change -= (change / 100) * 100;
            numberOf50CentCoinsData.set_text(std::to_string(change / 50));
            change -= (change / 50) * 50;
            numberOf20CentCoinsData.set_text(std::to_string(change / 20));
            change -= (change / 20) * 20;
            numberOf10CentCoinsData.set_text(std::to_string(change / 10));
            change -= (change / 10) * 10;
            numberOf5CentCoinsData.set_text(std::to_string(change / 5));
            change -= (change / 5) * 5;
            numberOf2CentCoinsData.set_text(std::to_string(change / 2));
            change -= (change / 2) * 2;
            numberOf1CentCoinsData.set_text(std::to_string(change / 1));
        } else {
            changeData.set_text("");
            numberOf500EuroNotesData.set_text("");
            numberOf200EuroNotesData.set_text("");
            numberOf100EuroNotesData.set_text("");
            numberOf50EuroNotesData.set_text("");
            numberOf20EuroNotesData.set_text("");
            numberOf10EuroNotesData.set_text("");
            numberOf5EuroNotesData.set_text("");
            numberOf2EuroCoinsData.set_text("");
            numberOf1EuroCoinsData.set_text("");
            numberOf50CentCoinsData.set_text("");
            numberOf20CentCoinsData.set_text("");
            numberOf10CentCoinsData.set_text("");
            numberOf5CentCoinsData.set_text("");
            numberOf2CentCoinsData.set_text("");
            numberOf1CentCoinsData.set_text("");
        }
    });
    // Create the main grid
    grid.set_column_spacing(10);
    grid.set_row_spacing(10);
    grid.set_valign(Gtk::Align::ALIGN_CENTER);
    priceLabel.set_hexpand(true);
    grid.attach(priceLabel, 0, 0);
    priceInput.set_hexpand(true);
    grid.attach(priceInput, 1, 0);
    moneyGivenLabel.set_hexpand(true);
    grid.attach(moneyGivenLabel, 0, 1);
    moneyGivenInput.set_hexpand(true);
    grid.attach(moneyGivenInput, 1, 1);
    calculateButton.set_hexpand(true);
    grid.attach(calculateButton, 0, 2, 2);
    changeLabel.set_hexpand(true);
    grid.attach(changeLabel, 0, 3);
    changeData.set_hexpand(true);
    grid.attach(changeData, 1, 3);
    numberOf500EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf500EuroNotesLabel, 0, 4);
    numberOf500EuroNotesData.set_hexpand(true);
    grid.attach(numberOf500EuroNotesData, 1, 4);
    numberOf200EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf200EuroNotesLabel, 0, 5);
    numberOf200EuroNotesData.set_hexpand(true);
    grid.attach(numberOf200EuroNotesData, 1, 5);
    numberOf100EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf100EuroNotesLabel, 0, 6);
    numberOf100EuroNotesData.set_hexpand(true);
    grid.attach(numberOf100EuroNotesData, 1, 6);
    numberOf50EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf50EuroNotesLabel, 0, 7);
    numberOf50EuroNotesData.set_hexpand(true);
    grid.attach(numberOf50EuroNotesData, 1, 7);
    numberOf20EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf20EuroNotesLabel, 0, 8);
    numberOf20EuroNotesData.set_hexpand(true);
    grid.attach(numberOf20EuroNotesData, 1, 8);
    numberOf10EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf10EuroNotesLabel, 0, 9);
    numberOf10EuroNotesData.set_hexpand(true);
    grid.attach(numberOf10EuroNotesData, 1, 9);
    numberOf5EuroNotesLabel.set_hexpand(true);
    grid.attach(numberOf5EuroNotesLabel, 0, 10);
    numberOf5EuroNotesData.set_hexpand(true);
    grid.attach(numberOf5EuroNotesData, 1, 10);
    numberOf2EuroCoinsLabel.set_hexpand(true);
    grid.attach(numberOf2EuroCoinsLabel, 0, 11);
    numberOf2EuroCoinsData.set_hexpand(true);
    grid.attach(numberOf2EuroCoinsData, 1, 11);
    numberOf1EuroCoinsLabel.set_hexpand(true);
    grid.attach(numberOf1EuroCoinsLabel, 0, 12);
    numberOf1EuroCoinsData.set_hexpand(true);
    grid.attach(numberOf1EuroCoinsData, 1, 12);
    numberOf50CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf50CentCoinsLabel, 0, 13);
    numberOf50CentCoinsData.set_hexpand(true);
    grid.attach(numberOf50CentCoinsData, 1, 13);
    numberOf20CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf20CentCoinsLabel, 0, 14);
    numberOf20CentCoinsData.set_hexpand(true);
    grid.attach(numberOf20CentCoinsData, 1, 14);
    numberOf10CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf10CentCoinsLabel, 0, 15);
    numberOf10CentCoinsData.set_hexpand(true);
    grid.attach(numberOf10CentCoinsData, 1, 15);
    numberOf5CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf5CentCoinsLabel, 0, 16);
    numberOf5CentCoinsData.set_hexpand(true);
    grid.attach(numberOf5CentCoinsData, 1, 16);
    numberOf2CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf2CentCoinsLabel, 0, 17);
    numberOf2CentCoinsData.set_hexpand(true);
    grid.attach(numberOf2CentCoinsData, 1, 17);
    numberOf1CentCoinsLabel.set_hexpand(true);
    grid.attach(numberOf1CentCoinsLabel, 0, 18);
    numberOf1CentCoinsData.set_hexpand(true);
    grid.attach(numberOf1CentCoinsData, 1, 18);
    aboutLabel.set_hexpand(true);
    grid.attach(aboutLabel, 0, 19, 2);
    // Create the main window
    window.set_title("chngclcltr");
    window.set_border_width(10);
    window.set_default_size(640, 640);
    window.set_size_request(480, 640);
    window.add(grid);
    window.show_all();
    return app->run(window);
}
