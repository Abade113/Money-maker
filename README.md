# Money-maker
2. A python automation tool with a simple web UI
Something like a chemistry unit converter/equation balancer/stochiometry calculator.

Built with Python and some simple frontend(HTML/JS)
---Money-maker.py(Nga shit at naming btw; caps+hyphen?!?)
---money.html (Superior naming)
---style.css
---README.md

This is the pseudo-main branch. Its not like we have anything to crash..

--> Phase 1 — Setup (Week 1)
Goal: both of you can run the project locally and push code

 Abaddy creates repo on GitHub, adds BigBoss as collaborator
 Both clone it, confirm we can push (sounds like we've done this successfully unsuccessfully)
 Abaddy sets up Flask "hello world" — just one route returning text (I have no idea what that is btw)
 We both confirm we can run it locally (Money-maker.py)
 Create a simple folder structure:

--> Phase 2 — First Feature: Unit Converter (Weeks 2–4)
Goal: ship one working, usable thing end to end

 Write Python functions for conversions (temperature, pressure, mass, volume — the ones you actually use in ChemE)
 Build a basic HTML form: user picks units, enters value, hits convert
 Flask route receives the form data, calls the Python function, returns the result
 Display result on the page

This is your template for every feature after this. Nail the pattern here and the rest comes faster.

--> Phase 3 — Molar Mass Calculator (Weeks 5–6)
Goal: your first "real chemistry" feature

 Write a function that takes a chemical formula (e.g. H2O) and returns molar mass
 Parse the formula string character by character — good logic exercise for Abaddy
 Use a hardcoded dictionary of elements and their atomic masses (no external library)
 Hook it up to the frontend the same way as Phase 2

--> Phase 4 — Stoichiometry Calculator (Weeks 7–9)
Goal: the most impressive feature, tackled when you have momentum

 Balance simple chemical equations (e.g. H2 + O2 → H2O)
 This is the hardest feature — linear algebra under the hood. Look up "equation balancing algorithm" together when you get here, don't try to invent it from scratch
 Calculate moles/mass from a given reactant amount

--> Phase 5 — Polish & Deploy (Weeks 10–12)
Goal: something live on the internet you can both link to

 Clean up the UI — doesn't need to be beautiful, just not embarrassing
 Write a proper README (what it does, how to run it, who made it)
 Deploy free on Render.com (straightforward for Flask apps)
 Both add it to our GitHub profiles

