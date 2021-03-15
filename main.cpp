#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

struct MovieNode
{
  int
        id,
        copies;

  std::string
        title,
        genre,
        prod,
        location;

};

int main()
{

MovieNode node;
list<MovieNode> MovieList;
list<MovieNode>::iterator iter;


  string line;
    ifstream myfile ("/Users/chikashoki/Documents/GitHub/Hello-Git/MovieList.txt");
    if (myfile.is_open())
    {
      int count = 0;
      while ( getline (myfile,line) )
      {
        switch(count)
        {
          case 0:
            node.id = stoi(line);
            break;
          case 1:
            node.title = line;
            break;
          case 2:
          node.genre = line;
            break;
          case 3:
          node.prod = line;
            break;
          case 4:
          node.copies = stoi(line);
            break;
          case 5:
          //add location
            break;
          default:
            break;
        }

        if(count < 5)
        {
          count++;
        }
        else
        {
          count = 0;
          MovieList.push_back(node);
        }

      }
      myfile.close();

    }

    else cout << "Unable to open file" << endl;

    for(iter = MovieList.begin(); iter != MovieList.end(); iter++)
    {
        cout << "ID: " << iter->id << endl;
        cout << "Copies: " << iter->copies << endl;
        cout << "Title: " << iter->title << endl;
        cout << "Genre: " << iter->genre << endl;
        cout << "Production: " << iter->prod << endl;
        cout << endl;

    }

//cout << node.id << endl << node.title << endl << node.genre << endl << node.prod << endl << node.copies << endl;
  return 0;
}


//system("open /System/Applications/Preview.app /Users/chikashoki/Documents/GitHub/Hello-Git/sched.png");
//system("start C:\\Users\\marbe\\Desktop\\graphics.h_test\\ImageGlass_8.0.12.8_x64\\ImageGlass.exe ");


/* string filename = "/Users/chikashoki/Documents/GitHub/Hello-Git/sched.png";
string cmd("open /System/Applications/Preview.app ");
  cmd += filename;
system(cmd.c_str());

#if _WIN32
        string filename = "C:\\Users\\marbe\\Desktop\\graphics.h_test\\1.jpg";
        #else
        string filename = "/Users/chikashoki/Documents/GitHub/Hello-Git/sched.png";
        #endif
*/
