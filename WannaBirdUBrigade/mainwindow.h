#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define NUM_QUOTES 31

#include <QMainWindow>
#include <stdio.h>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void displayRandomQuote();
    void displayNextQuote();


private:
    Ui::MainWindow *ui;

    QString quotes[NUM_QUOTES] = {
            "Perttu: \"Life is like a strawberry - Pink and sweet.\"",
            "Perttu: \"...and our drummer: Ringo Starr!\"\n*Mikko drummed something random and short*\nPerttu: \"Yeah. He prepared a special song for you. Very hard even for such a good drummer as him!.\"",
            "Mikko: \"And I just bought new trousers but I bought them from Perttu.\"",
            "Perttu: \"Eicca is good to kiss and has a nice body, but no tits\"",
            "Perttu: \"i don't ask anything for myself from santa...i don't need anything\"",
            "Perttu, as Eicca walks up to him and puts his hand on his rear end: \"Eek! (in sing-song voice) Where has your finger been?\"",
            "Eicca: \"There is no glamour in touring. None whatsoever. The first task of the day is to find a toilet. You can never even be sure if you can get to take a sh*t.\"",
            "Mikko, being asked by journalistabout Eicca's bad habbits: \"Eicca, bad habbits? How much time do we have?\"",
            "Eicca live: \"Perttu got a little excited during that last song. Let's calm him down with some Slayer...\"",
            "Perttu: \"you have no power over me\"",
            "Perttu at the Hamburg M&G when he received his Apoland T-Shirt\n\"Minister of the Arts? Shouldn't that be Minister of the Farts instead?\"",
            "Perttu and Mikko at the same event...when looking at the Apoland map, Mikko just spotted Mikkovillage:\nMikko:\"Oh I'm down there. So I'm Cape Horn?\"\nPerttu: \"You're more like Cape Horny!",
            "Eicca: \"If something happens, it's always Perttu. He's like a small child. If you don't look after him he's always in trouble.\"",
            "Perttu on the munich M&G:\n(not exactly word for word, but....almost)\nFan to perttu as he just gave a little kiss to another fan: \"you know this is called \"bussi\" in Germany...\"\nPerttu: \"pussy?!? yeah, I like pussy! really... big pussy bussi\"",
            "Eicca: \"My roots are somewhere deep in the fucking Finnish forests!\"",
            "Eicca: \"If it's too loud, you're too old!\"",
            "Eicca: \"We can go and kick ass anywhere\"",
            "Eicca: \"Sauna and concert areas should be separated\"",
            "Eicca: \"Perttu gets diahorrea always.\"",
            "Question: \"So, a guy with a cello is a damn sight more sexy than Keith Richards with a guitar?\"\nEicca: \"DEFINITELY... you will see.\"\nPaavo: \"A man with a guitar is nothing compared to a man with a cello.\"",
            "Question: \"why are cellos so sexy?\" \nPerttu: \"Firstly, we keep them between our legs.\"",
            "Perttu: On looking at a picture of himself with a fan \"Ah, who is that pretty boy?\"",
            "Perttu: (leaning against the door after hard, hot gig) \"My body is broken!\"",
            "Perttu: \"Clothes are black like the mind...or sometimes they are white or even pink... \"",
            "Perttu: \"We are a finnish instrumental rock/metal band who are mainly using cellos as their weapons\"",
            "Paavo: \"The luthiers love us. We give them a lot of business\"",
            "Question: \"Okay, now talking about WORLDS COLLIDE. How did you come up with the title? Can you say something about the album?\"\nMikko: \"As everything is done in this band, it's always done a bit after it should have been done already. As was with the name of the album and I think it needed to be decided, let's say on Monday, and we were still talking about it on Wednesday. There is not a huge philosophy behind the title, to be honest, but I think it's a cool title in a way, because it leaves fairly lots of questions open and it actually, at least to me it feels that it makes the listener become the active part in the sense that he or she starts to think what we mean with this title and so, yes, I think it's a cool title.\"\nPerttu: \"Mine and Mikko's worlds collided badly!\"\nMikko: \"Yeah, exactly! In the bathroom...\"\nPerttu: \"Hehehe...\"",
            "Question: \"Okay. So how would you describe the new album? What's different from APOCALYPTICA?\"\nMikko: \"It's more red, the cover. I think it's a huge difference to this blue.\"\nQuestion: \"I didn't mean that!\"\nMikko: \"Ah! Oh! Perttu can then answer.\"",
            "(about Stam1na)\n Perttu: \"They are better than us.\"\nMikko: \"They are the best metal band from Finland at the moment.\"",
            "Paavo: \"No, no, no, no!!! Not violins!!!!\"",
            "Perttu: \"Don't know how it happens. BUT, I always hit the head against the cello.\""
    };
    int current_quote;

};

#endif // MAINWINDOW_H
