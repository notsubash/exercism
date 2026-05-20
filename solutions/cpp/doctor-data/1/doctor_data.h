// doctor_data.h

#pragma once
#include <string>

namespace star_map {
    enum class System {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {

    class Vessel {
    private:
        std::string name{};

    public:
        star_map::System current_system;
        int generation{};
        int busters{0};

        Vessel(std::string name,
               int generation,
               star_map::System system = star_map::System::Sol)
            : name{name},
              current_system{system},
              generation{generation},
              busters{0} {}

        Vessel replicate(std::string new_name) {
            return Vessel{
                new_name,
                generation + 1,
                current_system
            };
        }

        void make_buster() {
            ++busters;
        }

        bool shoot_buster() {
            if (busters > 0) {
                --busters;
                return true;
            }
            return false;
        }

        friend std::string get_older_bob(const Vessel&, const Vessel&);
    };

    std::string get_older_bob(const Vessel& a, const Vessel& b) {
        return (a.generation <= b.generation) ? a.name : b.name;
    }

    bool in_the_same_system(const Vessel& a, const Vessel& b) {
        return a.current_system == b.current_system;
    }

}



