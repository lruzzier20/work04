int one(int below){
  int sum=0;
  int a=0;
  for(a=0;a<below;a++){
    if(a%3==0||a%5==0){sum+=a;}
  }
  return sum;
}
int six(int upTo){
  int sum_of_squares=0;
  int square_of_sum=0;
  int a=0;
  for(a=0;a<upTo+1;a++){
    sum_of_squares+=(a*a);
    square_of_sum+=a;
  }
  square_of_sum*=square_of_sum;
  return square_of_sum-sum_of_squares;
}
