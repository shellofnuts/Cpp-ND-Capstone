#pragma once

#include <iostream>
#include <vector>

#include "word_score.h"

class Display
{
public:
    Display();
    ~Display(){};

    void add_guess(const std::string user_guess, const WordScore score);
    void update_display() const;
    void update_display(std::string err_msg) const;

    std::string get_user_input();

private:
    void Display::refresh_display() const;
    void Display::format_word(const std::string &word) const;
    void Display::format_word(const char &letter) const;
    void print_keyboard() const;
    std::vector<std::string> _guesses;

    std::map<char, WordScore::Score> _game_state;
    std::array<char, 26> _keyboard = {'q','w','e','r','t','y','u','i','o','p',
                                      'a','s','d','f','g','h','j','k','l',
                                      'z','x','c','v','b','n','m'};
};