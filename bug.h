#ifndef BUG_H
#define BUG_H

// Edit only below this line.

class Bug {
    
public:
    Bug(int initial_position);
    void turn();
    void move();
    int get_position() const;
private:
    int position;
    bool is_facing_right;
    
};

Bug::Bug(int initial_position) {
    position = initial_position;
    is_facing_right = true;
}

void Bug::turn() {
    if (is_facing_right) {
        is_facing_right = false;
    }
    else {
        is_facing_right = true;
    }
}

void Bug::move() {
    if (is_facing_right) {
        position++;
    }
    else {
        position--;
    }
}

int Bug::get_position() const {
    return position;
}



// Edit only above this line.

#endif
