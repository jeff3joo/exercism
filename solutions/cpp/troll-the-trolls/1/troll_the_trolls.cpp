namespace hellmath {

    enum AccountStatus{
        troll,
        guest,
        user,
        mod
    };

    enum Action{
        read,
        write,
        remove
    };

    bool display_post(AccountStatus postUser, AccountStatus viewerUser){
        switch(postUser){
            case (AccountStatus::troll):
                if (viewerUser == AccountStatus::troll) return true;
                return false;
            default:
                return true;
        }
        
    }

    bool permission_check(Action UserAction, AccountStatus AccountRole){
        switch(AccountRole){
            case(AccountStatus::troll):
                if(UserAction == Action::read || UserAction == Action::write) return true;
                return false;
            case(AccountStatus::guest):
                if(UserAction == Action::read) return true;
                return false;
            case(AccountStatus::user):
                if(UserAction == Action::read || UserAction == Action::write) return true;
                return false;
            case(AccountStatus::mod):
                return true;
            default:
                return false;
        }
    }

    bool valid_player_combination(AccountStatus p1,AccountStatus p2){
        if(p1 == AccountStatus::guest || p2 == AccountStatus::guest) return false;
        if(p1 == AccountStatus::troll || p2 == AccountStatus::troll){
            if(p1 == AccountStatus::troll && p2 == AccountStatus::troll) return true;
            return false;
        }
        return true;
    }

    bool has_priority(AccountStatus u1, AccountStatus u2){
        if(u1>u2) return true;
        return false;
    }
}  // namespace hellmath
