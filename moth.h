#ifndef MOTH_H
#define MOTH_H

// Edit only below this line.

class Moth {
public:
    Moth(double initial_position);
    void move_to_light(double light_position);
    double get_position() const;
private:
    double position;
};

Moth::Moth(double initial_position) {
    position = initial_position;
}

void Moth::move_to_light(double light_position) {
    if (position > light_position) {
        position = position - (position - light_position)/2;
    } else if (light_position > position) {
        position = position + (light_position - position)/2;
    } else {
        return;
    }
}

double Moth::get_position() const {
    return position;
}





// Edit only above this line.

#endif
