namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus{
        troll, guest, user, mod
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action{
        read, write, remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer){
        switch(poster){
            case AccountStatus::troll:
                return viewer == AccountStatus::troll;
            default:
                return true;
        }
    }
    

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action act, AccountStatus status){
        switch(status){
            case AccountStatus::guest:
                return act == Action::read;
            case AccountStatus::user:
            case AccountStatus::troll:
                return act == Action::read || act == Action::write;
            default:
                return true;
        }
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1, AccountStatus player2){
        switch(player1){
            case AccountStatus::guest:
                return false;
            case AccountStatus::troll:
                return player2 == AccountStatus::troll;
            default:
                break;
        }
        switch(player2){
            case AccountStatus::guest:
                return false;
            case AccountStatus::troll:
                return player1 == AccountStatus::troll;
            default:
                break;
        }
        return true;
    }
    

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus a, AccountStatus b){
        int pa, pb;
    
        switch (static_cast<int>(a)) {
            case 0: pa = 0; break; // troll
            case 1: pa = 1; break; // guest
            case 2: pa = 2; break; // user
            case 3: pa = 3; break; // mod
        }
    
        switch (static_cast<int>(b)) {
            case 0: pb = 0; break;
            case 1: pb = 1; break;
            case 2: pb = 2; break;
            case 3: pb = 3; break;
        }

        return pa>pb;
    }

}  // namespace hellmath
