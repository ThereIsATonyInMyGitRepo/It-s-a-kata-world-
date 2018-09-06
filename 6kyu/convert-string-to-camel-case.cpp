kata: https://www.codewars.com/kata/convert-string-to-camel-case
cod:

		std::string to_camel_case(std::string text) 
		{
		  for(std::string::iterator c = text.begin(); c != text.end(); ++c)
			if(*c == '_' || *c == '-')
			  *(c+1)=toupper( *(c+1) );
			  
		  text.end()=text.erase( remove( text.begin(), text.end(), '_' ), text.end() );
		  text.end()=text.erase( remove( text.begin(), text.end(), '-' ), text.end() );
		  return text;
		}