#include<iostream>
#include<map>
#include<string>

using namespace std;

class Piece { 
private:
  string owner;
  string *possibleMoves;

public:
  Piece();
  Piece(string _owner) : owner(_owner) {}
  void genPossibleMoves() const;
  virtual string getType() = 0;
};

class Queen : public Piece {
private:
public:
  Queen();
  Queen(string _owner) : Piece::Piece(_owner) {} //DIFFERS FROM PROG
  void genPossibleMoves();
  string getType() {
    return "Queen";
  }
};

typedef map<string, Piece*>::iterator It;

int main() {
  map<string, Piece*> boardMap;

  boardMap["A1"] = new Queen("White");

  It it = boardMap.find("A1");

  if (it != boardMap.end())
    cout << "found it!" << endl;

  return 0;
}
