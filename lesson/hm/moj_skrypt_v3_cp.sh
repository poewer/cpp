#!/bin/bash



#rozpoczecie programu od wyboru logowania/rejestracji
echo "Wybierz opcje (1:2): "
echo '
1.Login
2.zarejestruj sie
'




while  [[ [$choice != 1]  ||  [$choice != 2] ]];
do 
        read choice

    #new line
    echo

    case $choice in
        "1")
                #Logoawnie --->
                echo "Logowanie: "
                echo    #new line
                echo "Podaj Login: "  
                read login_login    #wprowadzenie loginu
                echo    #new line
                echo "Podaj haslo: "  
                read login_haslo    #wprowadzenie hasła
                # <---!

                #sprawdzanie poprawności danych w bazie danych
                check_login=$(grep "^Login: $login_login$" base64) #sprawdzanie czy login istnieje w bazie
                check_haslo=$(grep "^Haslo: $login_haslo$" base64) #sprawdzanie czy haslo istnieje w bazie 

                    if [ "$check_login" == "Login: $login_login" ] && [ "$check_haslo" == "Haslo: $login_haslo" ] ;
                    then
                        echo "poprawnie sie zalogowales"
                        echo    #new line     

                        #Dodatkowe informacje --->
                        #Kodaowanie i dekodowanie loginu/hasla base64
                        login_login_base64_code=$(printf "$login_login" | base64);
                        login_login_base64_decode=$(printf "$login_login_base64_code" | base64 -d);

                        login_haslo_base64_code=$(printf "$login_haslo" | base64);
                        login_haslo_base64_decode=$(printf "$login_haslo_base64_code" | base64 -d);

                        #Sprawdzanie poprawności kodowania base64 i dekodowania
                        echo "Login code base64: $login_login_base64_code"
                        echo "Login decode base64: $login_login_base64_decode"

                        echo    #new line

                        echo "Haslo code base64: $login_haslo_base64_code"
                        echo "Haslo decode base64: $login_haslo_base64_decode"

                        #Sprawdzanie poprawnosci podanych danych
                        echo "Login: $login_login  haslo: $login_haslo"
                        # <---

                                #opcje dostepu po zalogowaniu
                                echo    "
                                        1) Dodaj dane
                                        2) Modyfikuj dane
                                        3) Usun dane !Usuniecie calego konta!
                                        4) Wyswietl dane
                                        5) Zakoncz skrypt
                                        "                                        
                                        
                                        while read choice;
                                        do
                                            case $choice in
                                                1)   
                                                    echo   "podaj co chcesz wprowadzic: 
                                                            1)Imie
                                                            2)Nazwisko
                                                            3)Login
                                                            4)Haslo
                                                            5)Tip
                                                            6)exit
                                                            "
                                                                #   TODO
                                                                #   ZROBIĆ DODWANIE OBIEKTÓW W TABLICY ORMALNEJ POTEM UZUPEŁNIANIE PO PRZEZ WYBIERANIE ODPOWIEDNICH INDEKSÓW 
                                                                #   ^----------------------------------------------------------------------------------------------------------

                                                                while read choice ;
                                                                do
                                                                    case $choice in
                                                                    1)        
                                                                        if grep "$login_login_base64_decode Array=([A-Za-z]*. ," base64;    #sprzwdzamy czy imie zostało już wcześniej podane 
                                                                        then
                                                                            echo "Imie jest juz podane"
                                                                            grep "$login_login_base64_decode Array=(</[A-Za-z]." base64;    
                                                                            break
                                                                        else
                                                                            echo "Podaj Imie"                                                
                                                                            read Imie                                                                                                                         
                                                                            sed -ie "s/$login_login_base64_decode Array=( )/$login_login_base64_decode Array=($Imie , )/" base64    #jeżeli tabela z imieniem jest pusta wypełnij ją podanym imieniem
                                                                            break
                                                                        fi                                                                
                                                                        ;;
                                                                    2)  
                                                                        if grep "$login_login_base64_decode Array=([A-Za-z]*. , [A-Za-z]*. ," base64;    #sprzwdzamy czy Nazwisko zostało już wcześniej podane 
                                                                        then
                                                                            echo "Nazwisko jest juz podane"
                                                                            grep "$login_login_base64_decode Array=(</[A-Za-z]." base64; 
                                                                            break
                                                                        else
                                                                            echo "Podaj Nazwisko"     
                                                                            imie_array=$(grep "$login_login_base64_decode Array=([A-Za-z]*. ," base64)                                           
                                                                            read Nazwisko
                                                                            sed -ie "s/$login_login_base64_decode Array=(', [A-Za-z]*.')/$login_login_base64_decode Array=(kotek)/" base64    #jeżeli tabela z nazwiskiem jest pusta wypełnij ją podanym imieniem
                                                                            break
                                                                        fi
                                                                        ;;
                                                                    3)  echo "Nie mozesz wprowadzic loginu" 
                                                                        break
                                                                        ;;
                                                                    4)  echo "Nie mozesz wprowadzic hasla ale mozesz je zmienic" 
                                                                        break
                                                                        ;;
                                                                    5)  echo "tip"
                                                                        ;;
                                                                    6) break ;;                                                                
                                                                    *)  echo "Nie ma takiej opcji do tablicy!!!"                                                                    
                                                                        ;;      
                                                                    esac
                                                                done
                                                    break
                                                    ;;
                                                2)  echo "modyfikuj dane"
                                                    break
                                                    ;;
                                                3)  echo "Usun dane !Usuniecie calego konta!" 
                                                    break
                                                    ;;
                                                4)  grep "$login_login_base64_decode"'_array=*' base64
                                                   # echo ${array_database[*]}
                                                    break
                                                    ;;
                                                5)  echo "tip" 
                                                    break
                                                    ;;                                                
                                                *)  echo "nie ma takiej opcji modyfikacji!!!"                                                      
                                                    ;;                                                  
                                            esac
                                        done                                                

                    else
                        if [ "$check_login" != "Login: $login_login" ];
                        then
                            echo "Uzytkownik o takim Loginie nie istnieje"
                        else
                            echo "Podales zly login lub haslo"

                        fi

                    fi
            break
            ;;
        "2")    
                #Rejestracja --->
                echo "Rejestracja: " 
                echo    #new line
                echo "Podaj Login: "  
                read rej_login    #wprowadzenie loginu
                echo
                echo "Podaj haslo: "  
                read rej_haslo    #wprowadzenie hasła     
                # <---!

                if  grep "^Login: $rej_login$" base64  ; #Sprawdzamy czy użytkownik o takim Loginie znajduje się w bazie 
                then
                    echo "takie konto juz istnieje"
                else
                    #Kodaowanie i dekodowanie loginu/hasla base64 --->

                    #Login
                    rej_login_base64_code=$(printf "$rej_login" | base64);
                    rej_login_base64_decode=$(printf "$rej_login_base64_code" | base64 -d);
                    #Hasło
                    rej_haslo_base64_code=$(printf "$rej_haslo" | base64);
                    rej_haslo_base64_decode=$(printf "$rej_haslo_base64_code" | base64 -d);

                    # <---!

                    #zapisywanie login/haslo do pliku base64
                    save_Login_rej=$(echo Login: "$rej_login_base64_decode" >> base64 && echo Login base64: "$rej_login_base64_code" >> base64 );
                    save_Login_rej=$(echo Haslo: "$rej_haslo_base64_decode" >> base64 && echo Haslo base64: "$rej_haslo_base64_code" >> base64 );
                    create_array=$(echo "$rej_login_base64_decode"" Array=( )" >> base64 && echo >> base64 );

                    #wykonanie poleceń
                    echo "$save_Login_rej"
                    echo "$save_Haslo_rej"
                    echo "$create_array"

                    echo "!Pomyslna rejestracja!"
                    break
                fi
                
            ;;
        *)
                echo "Nie poprawny wybor"
                echo #new line
            ;;
    esac
done
