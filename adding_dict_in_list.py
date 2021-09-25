travel_log = [
    {
        "country": "France",
        "visits": 12,
        "cities": ["Paris", "Lille", "Dijon"]
    },
    {
        "country": "Germany",
        "visits": 5,
        "cities": ["Berlin", "Hamburg", "Stuttgart"]
    },
]


# TODO: Write the function that will allow new countries
# method 1
def add_new_country(country_visited, times_visites, cities_visit):
    travel = {"country": "Russia",
              "visits": 2,
              "cities": ["moscow", "saint petersburg"]

              }
    travel_log.append(travel)


add_new_country(country_visited="country", times_visites="visits", cities_visit="cities")

print(travel_log)


# method2

def add_new_country(country_visited, times_visites, cities_visit):
    new_country = {} # create a empty dict
    new_country["country"] = country_visited
    new_country["visits"] = times_visites
    new_country["cities"] = cities_visit

    travel_log.append(new_country)


add_new_country("Russia", 2, ["moscow", "saint petersburg"])

print(travel_log)
