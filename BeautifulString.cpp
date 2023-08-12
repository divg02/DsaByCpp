https://www.codingninjas.com/studio/problems/beautiful-string_1115625?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

int makeBeautiful(string str) {
	int counta = 0,countb = 0;
	for(int i = 0;i< str.size();i++){
		if(i % 2 == 0 && str[i] != '0'){
			counta++;
		}
		else if(i% 2 == 1 && str[i] != '1'){
			counta++;
		}
	}
		for(int i = 0;i< str.size();i++){
		if(i % 2 == 0 && str[i] != '1'){
			countb++;
		}
		else if(i% 2 == 1 && str[i] != '0'){
			countb++;
		}
	}
	return (counta > countb) ? countb : counta;
}
