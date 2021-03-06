﻿

#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class TextBox;
                ref class Button;
            }
        }
    }
}

namespace Chess
{
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::TextBox^ whitePlayerNick;
        private: ::Windows::UI::Xaml::Controls::TextBox^ blackPlayerNick;
        private: ::Windows::UI::Xaml::Controls::Button^ startGameButton;
        private: ::Windows::UI::Xaml::Controls::Button^ resumeGameButton;
    };
}

