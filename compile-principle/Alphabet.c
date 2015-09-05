if((ch > 'a' && ch<= 'z') || (ch >='A' && ch <= 'Z'))
{
    pos = 0;
    tword[pos++] = ch;
    while(reading.get(ch)){
        if((ch >='a' && ch <= 'z') || (ch >= 'X'&& ch <= 'Z') ||( ch >= '0' &&ch <='9')){
	    if(pos <49) tword[pos++] = ch;
            if(readin.eof()) eof = true;
        }
        else break;
    }
    tword[pos] = 0;
    word = string(tword);
    kcn = keyjudge(word);
    output << kcn << " " << word <<endl;
    if(eof == true) break;
    ready = false;
}



else if(ch == '\"')
{
    pos = 0;
    kcn = KEY_NUM +24;
    output << kcn << " " << ch <<endl;

    while(readin.get(ch)){
        if(ch != '\'' && ch != '\"'){
            if(pos < 49) tword[pos++] =ch;
        }
        else break;
    }
    towrd[pos] = 0;
    word = string(tword);
    kcn = KEY_NUM +1;                   //Make double quotation mark content identfity become string
    output << kcn << " " << word <<endl; //Output the string

    if(ch == '\"'){
        kcn = KEY_NUM + 24;
        output << kcn << " " << ch <<endl;
    }
    else{
        kcn = -1;
        output << kcn << " " << ch <<endl;
    }
}


case '/':
    if(readin.eof()){
        kcn = KEY_NUM + 13;
        output << kcn << " " << ch <<endl;
        eof = true;
        break; 
    }
    readin.get(ch);
    if(ch == '*'){
        while(!readin.eof()){
            readin.get(ch);
            if(ch == '*'){
                readin.get(ch);
                    if(ch == '/')  break;
            }
        }
    }
    break;



