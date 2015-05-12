﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "GameBoard.xaml.h"
#include "App.xaml.h"
#include "MainPage.xaml.h"

#include "GameBoard.g.hpp"
#include "App.g.hpp"
#include "MainPage.g.hpp"

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        _otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForName(::Platform::String^ typeName)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(typeName);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForType(::Windows::UI::Xaml::Interop::TypeName t)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(t);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    if (typeName == L"Windows.UI.Xaml.Controls.Page")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.UserControl")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Object")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Media.Imaging.BitmapImage")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"String")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Boolean")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Chess.GameBoard")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Page"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Chess::GameBoard(); 
            };
        userType->SetIsLocalType();
        return userType;
    }

    if (typeName == L"Chess.MainPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Page"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Chess::MainPage(); 
            };
        userType->SetIsLocalType();
        return userType;
    }

    if (typeName == L"Chess.FieldViewModel")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Chess::FieldViewModel(); 
            };
        userType->AddMemberName(L"PieceImage");
        userType->AddMemberName(L"PieceOnField");
        userType->AddMemberName(L"Highlighted");
        userType->SetIsBindable();
        userType->SetIsLocalType();
        return userType;
    }

    if (typeName == L"Chess.PlayerViewModel")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Chess::PlayerViewModel(); 
            };
        userType->AddMemberName(L"IsCheck");
        userType->AddMemberName(L"IsMyTurn");
        userType->SetIsBindable();
        userType->SetIsLocalType();
        return userType;
    }

    if (typeName == L"Chess.GameViewModel")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Chess::GameViewModel(); 
            };
        userType->AddMemberName(L"IsCheckMate");
        userType->SetIsBindable();
        userType->SetIsLocalType();
        return userType;
    }

    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    if (longMemberName == L"Chess.FieldViewModel.PieceImage")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"PieceImage", L"Windows.UI.Xaml.Media.Imaging.BitmapImage");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Chess::FieldViewModel^)instance;
                return that->PieceImage;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Chess::FieldViewModel^)instance;
                that->PieceImage = (::Windows::UI::Xaml::Media::Imaging::BitmapImage^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Chess.FieldViewModel.PieceOnField")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"PieceOnField", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Chess::FieldViewModel^)instance;
                return that->PieceOnField;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Chess::FieldViewModel^)instance;
                that->PieceOnField = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Chess.FieldViewModel.Highlighted")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Highlighted", L"Boolean");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Chess::FieldViewModel^)instance;
                auto value = ref new ::Platform::Box<::Platform::Boolean>(that->Highlighted);
                return value;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Chess::FieldViewModel^)instance;
                auto boxedValue = (::Platform::IBox<::Platform::Boolean>^)value;
                that->Highlighted = boxedValue->Value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Chess.PlayerViewModel.IsCheck")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"IsCheck", L"Boolean");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Chess::PlayerViewModel^)instance;
                auto value = ref new ::Platform::Box<::Platform::Boolean>(that->IsCheck);
                return value;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Chess::PlayerViewModel^)instance;
                auto boxedValue = (::Platform::IBox<::Platform::Boolean>^)value;
                that->IsCheck = boxedValue->Value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Chess.PlayerViewModel.IsMyTurn")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"IsMyTurn", L"Boolean");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Chess::PlayerViewModel^)instance;
                auto value = ref new ::Platform::Box<::Platform::Boolean>(that->IsMyTurn);
                return value;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Chess::PlayerViewModel^)instance;
                auto boxedValue = (::Platform::IBox<::Platform::Boolean>^)value;
                that->IsMyTurn = boxedValue->Value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Chess.GameViewModel.IsCheckMate")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"IsCheckMate", L"Boolean");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Chess::GameViewModel^)instance;
                auto value = ref new ::Platform::Box<::Platform::Boolean>(that->IsCheckMate);
                return value;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Chess::GameViewModel^)instance;
                auto boxedValue = (::Platform::IBox<::Platform::Boolean>^)value;
                that->IsCheckMate = boxedValue->Value;
            };
        return xamlMember;
    }

    return nullptr;
}

