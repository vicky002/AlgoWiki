---
title: Django
category: Frameworks
---

Django Python Web Framework
---------------------------

- [Django](#django)
    - [Admin Interface](#admin-interface)
    - [Asset Management](#asset-management)
    - [Authentication](#authentication)
    - [Authorization](#authorization)
    - [Caching](#caching)
    - [Compatibility](#compatibility)
    - [Debugging](#debugging)
    - [Email](#email)
    - [Fields](#fields)
    - [File Transfers](#file-transfers)
    - [Forms](#forms)
    - [GIS](#gis)
    - [Image handling](#image-handling)
    - [Migrations](#migrations)
    - [Mobile Support](#mobile-support)
    - [Model Extensions](#model-extensions)
    - [Payment Processing](#payment-processing)
    - [Project Management](#project-management)
    - [RESTful API](#restful-api)
    - [SEO](#seo)
    - [Search](#search)
    - [Security](#security)
    - [Settings](#settings)
    - [Storage](#storage)
    - [Tagging](#tagging)
    - [Task Queue](#task-queue)
    - [Testing](#testing)
    - [Thumbnail](#thumbnail)
    - [Translations](#translations)
    - [Views](#views)
    - [Web frontend integration](#web-frontend-integration)
    - [Wiki apps](#wiki-apps)
    - [Workflows](#workflows)
    - [WYSIWYG Editors](#wysiwyg-editors)
    - [Other](#other)
- [Projects](#projects)
    - [CMS](#cms)
    - [Document Management](#document-management)
    - [Project Management](#project-management)
    - [e-Commerce](#e-commerce)
    - [Other](#other)
- [Resources](#resources)
    - [Books](#books)
    - [Conferences](#conferences)
    - [Videos](#videos)
    - [Websites](#websites)
- [Utilities](#utilities)
- [Contributing](#contributing)

## Admin interface

*Packages that extend the Admin interface, adding or improving features.*

* [djamin](https://github.com/hersonls/djamin/) - A new style for Django admin.
* [django-admin-bootstrap](https://github.com/douglasmiranda/django-admin-bootstrap/) - Responsible Skin for Django Admin
* [django-admin-bootstrapped](https://github.com/django-admin-bootstrapped/django-admin-bootstrapped/) - A Django admin theme using Twitter Bootstrap.
* [django-admin-tools](https://bitbucket.org/izi/django-admin-tools/) - A collection of extensions/tools for the default django administration interface
* [django-admin2](https://github.com/pydanny/django-admin2/) - Extendable, adaptable rewrite of django.contrib.admin
* [django-flat-theme](https://github.com/elky/django-flat-theme) - A flat theme for Django admin interface. Modern, fresh, simple.
* [django-fluent-dashboard](https://github.com/edoburu/django-fluent-dashboard/) - An improved django-admin-tools dashboard for Django projects
* [django-grappelli](https://github.com/sehmaschine/django-grappelli/) - A jazzy skin for the Django Admin-Interface.
* [django-hijack](https://github.com/arteria/django-hijack/) - Allows superusers to hijack (=login as) and work on behalf of another user.
* [django-material](https://github.com/viewflow/django-material) Material design for Django Forms and Admin. Template driven.
* [django-suit](https://github.com/darklow/django-suit/) - Modern theme for Django admin interface.
* [django-xadmin](https://github.com/sshwsfc/django-xadmin/) - Drop-in replacement of Django admin comes with lots of goodies, fully extensible with plugin support, pretty UI based on Twitter Bootstrap
* [django-wpadmin](https://github.com/barszczmm/django-wpadmin/) - WordPress look and feel for Django administration panel.
* [yawd-admin](https://github.com/yawd/yawd-admin/) - An administration website for Django

## Asset Management

*Packages that help manage the static assets of a project.*

* [django-compressor](https://github.com/django-compressor/django-compressor/) - Compresses linked and inline javascript or CSS into a single cached file.
* [django-gears](https://github.com/gears/django-gears/) - Compiles and concatenates JavaScript and CSS assets.
* [django-htmlmin](https://github.com/cobrateam/django-htmlmin/) - HTML minifier for Python with full support for HTML 5 and Django.
* [django-pipeline](https://github.com/cyberdelia/django-pipeline/) - Asset packaging for Django.

## Authentication

*Packages that improve or extend the authentication methods of Django.*

* [django-allauth](https://github.com/pennersr/django-allauth/) - Integrated set of Django applications addressing authentication, registration, account management as well as 3rd party (social) account authentication.
* [django-organizations](https://github.com/bennylope/django-organizations) - Multi-user accounts for Django projects.
* [django-otp](https://bitbucket.org/psagers/django-otp/) - A pluggable framework for adding two-factor authentication to Django using one-time passwords.
* [django-rest-auth](https://github.com/Tivix/django-rest-auth) -  A set of REST API endpoints to handle User Registration and Authentication tasks.
* [django-two-factor-auth](https://github.com/Bouke/django-two-factor-auth/) - User-friendly Two-Factor authentication.
* [django-userena](https://github.com/bread-and-pepper/django-userena/) - Accounts for Django made beautifully simple
* [python-social-auth](https://github.com/omab/python-social-auth/) - Python Social Auth is an easy-to-setup social authentication/registration mechanism with support for several frameworks and auth providers.

## Authorization

*Packages related to authorization infrastructure and permissions.*

* [django-guardian](https://github.com/lukaszb/django-guardian/) - Implementation of per object permissions as authorization backend.
* [django-oauth-toolkit](https://github.com/evonove/django-oauth-toolkit) - OAuth2 goodies for the Djangonauts!
* [django-oauth2-provider](https://github.com/caffeinehit/django-oauth2-provider) - Provide OAuth2 access to your app
* [django-oml](https://github.com/RouteAtlas/django-oml/) - Object Moderation Layer, mixin for models that allows you moderate several content types.
* [django-permission](https://github.com/lambdalisue/django-permission/) An enhanced permission library which enables a *logic-based permission system* to handle complex permissions in Django
* [django-rules](https://github.com/dfunckt/django-rules) - A tiny but powerful app providing object-level permissions to Django, without requiring a database. At its core, it is a generic framework for building rule-based systems, similar to decision trees. It can also be used as a standalone library in other contexts and frameworks.

## Caching

*Packages that help with caching.*

* [django-cachalot](https://github.com/BertrandBordage/django-cachalot) - Caches your Django ORM queries and automatically invalidates them.
* [django-cache-machine](https://github.com/jbalogh/django-cache-machine) - Automatic caching and invalidation for Django models through the ORM.
* [django-cacheops](https://github.com/Suor/django-cacheops) - A slick ORM cache with automatic granular event-driven invalidation.
* [django-memoize](https://github.com/tvavrys/django-memoize) - An implementation of [memoization](http://en.wikipedia.org/wiki/Memoization) technique for Django.
* [django-ormcache](https://github.com/educreations/django-ormcache/) - A cache manager mixin that provides some caching of objects for the ORM.
* [johnny-cache](https://github.com/jmoiron/johnny-cache/) - Johnny Cache is a caching framework for django applications.

## Compatibility

*Packages that help to keep compatibility of reusable apps between different Django versions.*

* [django-compat](https://github.com/arteria/django-compat) - For- and backwards compatibility layer for Django 1.4 to 1.7.x.
* [django-compat-lint](https://github.com/ubernostrum/django-compat-lint) - Check Django compatibility of your code.

## Debugging

*Packages that help hunt down bugs.*

* [django-debug-toolbar](https://github.com/django-debug-toolbar/django-debug-toolbar/) - A configurable set of panels that display various debug information about the current request/response.
* [django-devserver](https://github.com/dcramer/django-devserver/) - A drop in replacement for Django's built-in runserver command.
* [django-querycount](https://github.com/bradmontgomery/django-querycount/) - Middleware that Prints the number of DB queries to the runserver console.
* [django-silk](https://github.com/mtford90/silk/) - Silky smooth profiling for Django

## Email

*Packages that help manage email sending.*

* [django-celery-email](https://github.com/pmclanahan/django-celery-email/) - A Django email backend that uses a celery task for sending the email.
* [django-drip](https://github.com/zapier/django-drip) - Django Admin based management for drip email campaigns
* [django-mailgun](https://github.com/BradWhittington/django-mailgun/) - A Django email backend for Mailgun.
* [django-post_office](https://github.com/ui/django-post_office/) - A simple app to send and manage your emails in Django, supports templates and can be easily integrated with task queues.
* [django-ses](https://github.com/hmarr/django-ses/) - A Django email backend for Amazon's Simple Email Service.
* [django-spoolgore](https://github.com/20tab/django-spoolgore) - A django email backed for the Spoolgore daemon.
* [django-templated-email](https://github.com/BradWhittington/django-templated-email) - Django module to easily send templated emails using django templates, or using a transactional mail provider (mailchimp, silverpop, etc.)
* [django-yubin](https://github.com/APSL/django-yubin) - django-mailer2 + django-mailviews with some extras.
* [djrill](https://github.com/brack3t/Djrill/) - Email backend and new message class for Mandrill transactional email service from MailChimp.

## Fields

*Packages that extend the functionality of existing field type or add new field types.*

* [django-bitfield](https://github.com/disqus/django-bitfield/) - A BitField extension for Django models.
* [django-countries](https://github.com/SmileyChris/django-countries/) - Provides country choices for forms, flag icons, and a CountryField.
* [django-enumfield](https://github.com/5monkeys/django-enumfield/) - Custom Django field for using enumerations of named constants.
* [django-image-tools](https://github.com/bonsaistudio/django-image-tools/) - A package to handle images in Django.
* [django-imagekit](https://github.com/matthewwithanm/django-imagekit/) - Automated image processing for Django.
* [django-jsonfield](https://pypi.python.org/pypi/django-jsonfield) - JSONField for Django models.
* [django-location-field](https://github.com/caioariede/django-location-field/) - Location field and widget integrated with google maps.
* [django-picklefield](https://github.com/gintas/django-picklefield/) - A pickled object field for Django
* [django-uuidfield](https://github.com/dcramer/django-uuidfield/) - A UUIDField for Django.
* [django-versatileimagefield](https://github.com/WGBH/django-versatileimagefield/) - A drop-in replacement for django's ImageField that provides a flexible, intuitive and easily-extensible interface for quickly creating new images from the one assigned to the field.

## File Transfers

*Packages that help transfer files between projects and users*

* [django-downloadview](https://github.com/benoitbryon/django-downloadview/) - Serve files with Django.
* [django-sendfile](https://github.com/johnsensible/django-sendfile/) - This is a wrapper around web-server specific methods for sending files to web clients.

## Forms

*Packages that extend the functionality of forms or add new types of forms.*

* [django-bootstrap-form](https://github.com/tzangms/django-bootstrap-form/) - Twitter Bootstrap for Django Form
* [django-bootstrap3](https://github.com/dyve/django-bootstrap3/) - Use Bootstrap in your Django templates, the Django way.
* [django-crispy-forms](https://github.com/maraujop/django-crispy-forms/) - The best way to have DRY Django forms. The app provides a tag and filter that lets you quickly render forms in a div format while providing an enormous amount of capability to configure and control the rendered HTML.
* [django-floppyforms](https://github.com/gregmuellegger/django-floppyforms/) - django-floppyforms is an application that gives you full control of the output of forms rendering. The forms API and features are exactly the same as Django’s, the key difference is that fields and widgets are rendered in templates instead of using string interpolation, giving you full control of the output using Django templates.
* [django-autocomplete-light](https://github.com/yourlabs/django-autocomplete-light/) - django-autocomplete-light's purpose is to enable autocompletes quickly and properly in a django project.

## GIS

*Packages that make it easier to work with geographical information system projects.*

* [django-geoposition](https://github.com/philippbosch/django-geoposition/) - A model field that can hold a geoposition (latitude/longitude), and corresponding admin/form widget.
* [django-location-field](https://github.com/caioariede/django-location-field/) - Location field and widget integrated with Google Maps.

## Image handling

*Packages that help to manipulate, alter, or convert images.*

* [django-image-cropping](https://github.com/jonasundderwolf/django-image-cropping) - helper application to easily and non-destructively crop arbitrarily large images in admin and frontend.

## RESTful API

*Packages for developing RESTful APIs.*

* [django-nap](http://github.com/funkybob/django-nap/) - A minimalist approach to object serialization, RESTful views, and RPC views.
* [django-rest-framework](http://www.django-rest-framework.org/) - A powerful and flexible toolkit that makes it easy to build Web APIs.
* [django-rest-swagger](https://github.com/marcgibbons/django-rest-swagger/) - Swagger Documentation Generator for Django REST Framework
* [django-tastypie](http://tastypieapi.org/) - Creating delicious APIs for Django apps since 2010.
* [restless](https://github.com/toastdriven/restless/) - A lightweight REST miniframework for Python

## Migrations

*Packages that help migrate the database when there are schema updates.*

* [South](https://bitbucket.org/andrewgodwin/south/src/) - Django application to provide schema and data migrations that supports Django up to 1.6.x. ([Django 1.7 and up have an integrated migration system, based on but not compatible with South](https://docs.djangoproject.com/en/dev/topics/migrations/))

## Mobile Support

*Packages that help you support for mobile iOS, Android and Others*

* [django-push-notifications](https://github.com/jleclanche/django-push-notifications) - A minimal Django app that implements Device models that can send messages through APNS and GCM.
* [django-pushy](https://github.com/rakanalh/django-pushy) - Django app that provides push notifications functionality with celery. The main purpose of this app is to help you send push notifications to your users at scale. If you have lots of registered device keys, django-pushy will split your keys into smaller groups which run in parallel making the process of sending notifications faster.

## Model Extensions

*Packages that extend the functionality of models or add new classes of models.*

* [django-aggregate-if](https://github.com/henriquebastos/django-aggregate-if/) - Conditional aggregates for Django queries, just like the famous SumIf and CountIf in Excel.
* [django-localflavor](https://github.com/django/django-localflavor/) - Country-specific Django helpers, formerly of contrib fame.
* [django-model-utils](https://github.com/carljm/django-model-utils/) - Django model mixins and utilities.
* [django-mptt](https://github.com/django-mptt/django-mptt/) - Utilities for implementing a modified pre-order traversal tree in django.
* [django-treebeard](https://github.com/tabo/django-treebeard) -Alternative tree data structures for Django (provides 3 different methods for storing hierarchical data, including MPTT )

## Payment Processing

*Packages that provide payment processing provider integration.*

* [dj-stripe](https://github.com/pydanny/dj-stripe/) - Django + Stripe Made Easy.
* [django-merchant](https://github.com/agiliq/merchant/) - A Django app that provides helpers for multiple pluggable payment backends.
* [django-paypal](https://github.com/spookylukey/django-paypal) - A pluggable Django application for integrating PayPal Payments Standard or Payments Pro.
* [django-pinpayments](https://github.com/rossp/django-pinpayments/) - Django library to simplify payment processing with pin.
* [django-oscar-adyen](https://github.com/oscaro/django-oscar-adyen/) - This package provides integration with the Adyen payment gateway. It is designed to work seamlessly with the e-commerce framework django-oscar but can be used without Oscar.
* [django-oscar-paymentexpress](https://github.com/django-oscar/django-oscar-paymentexpress/) - This package provides integration with the payment gateway, PaymentExpress using their PX POST API. It is designed to work seamlessly with the e-commerce framework django-oscar but can be used without it.
* [django-oscar-paypal](https://github.com/django-oscar/django-oscar-paypal/) - PayPal integration for django-oscar. Can be used without Oscar too.
* [django-zebra](https://github.com/GoodCloud/django-zebra/) - Forms, widgets, template tags and examples that make Stripe + Django easier.

## Project Management

* [django-timepiece](https://github.com/caktus/django-timepiece/) - A multi-user Django application for tracking people's time on projects.

## Search

*Packages that provide search capabilities to projects.*

* [django-haystack](https://github.com/toastdriven/django-haystack/) - Modular search for Django.
* [django-watson](https://github.com/etianen/django-watson/) - Fast multi-model full-text search plugin.

## Security

*Packages that improve the security of a project.*

* [django-admin-honeypot](https://github.com/dmpayton/django-admin-honeypot/) - A fake Django admin login screen to notify admins of attempted unauthorized access.
* [django-axes](https://github.com/django-pci/django-axes/) - is a very simple way for you to keep track of failed login attempts, both for the Django admin and for the rest of your site.
* [django-debreach](https://github.com/lpomfrey/django-debreach/) - BREACH mitigation for Django apps.
* [django-password-session](https://github.com/atugushev/django-password-session/) - Invalidate all active sessions after change password ([not needed for Django 1.7+](https://docs.djangoproject.com/en/dev/topics/auth/default/#session-invalidation-on-password-change)).
* [django-secure](https://github.com/carljm/django-secure/) - Helping you remember to do the stupid little things to improve your Django site's security.
* [django-sslify](https://github.com/rdegges/django-sslify/) - Force SSL on your Django site.
* [django-stronghold](https://github.com/mgrouchy/django-stronghold/) - Stronghold is middleware to default all your views to login required.

## SEO

*Packages that help improve SEO ( Search Engine Optimization ) of projects.*

* [django-meta](https://github.com/nephila/django-meta/) - a pluggable app to allow Django developers to quickly add meta tags and OpenGraph, Twitter, and Google Plus properties to their HTML responses.
* [django-seo](https://github.com/willhardy/django-seo/) - Provides a set of tools for managing Search Engine Optimisation (SEO) for Django sites.
* [django-robots](https://github.com/jezdez/django-robots) - A Django app for managing robots.txt files following the robots exclusion protocol.

## Settings

*Packages that help manage the configurability of projects.*

* [django-configurations](https://github.com/jezdez/django-configurations/) - A helper for organizing Django project settings by relying on well established programming patterns.
* [django-constance](https://github.com/jezdez/django-constance/) - A Django app for storing dynamic settings in pluggable backends (Redis and Django model backend built in) with an integration with the Django admin app.
* [python-decouple](https://github.com/henriquebastos/python-decouple/) - Strict separation of config from code.
* [django-environ](https://github.com/joke2k/django-environ) - Allows you to utilize 12factor inspired environment variables to configure your Django application.

## Storage

*Packages that extend the functionality of the existing storage backend or provide new storage backends.*

* [django-storages](https://bitbucket.org/david/django-storages/src/) - django-storages is a collection of custom storage backends for Django.
* [django-queued-storage](https://github.com/jezdez/django-queued-storage/) - Provides a proxy for Django storage backends that allows you to upload files locally and eventually serve them remotely.
* [django-webdav-storage](https://github.com/marazmiki/django-webdav-storage) - Django storage backend that stores files in custom WebDAV storage.
* [django-selectel-storage](https://github.com/marazmiki/django-selectel-storage) - This application allows you easily save media and static files into [Selectel](https://selectel.ru/) cloud storage.



## Tagging

* [django-taggit](https://github.com/alex/django-taggit/) - Simple tagging for Django.

## Task Queue

*Packages that make working with task/background queues easier.*

* [django-celery](http://celery.github.io/django-celery/) - Celery Integration for Django. (no longer required for Celery 3.1 and up)
* [django-rq](https://github.com/ui/django-rq) - The easiest way to monitor and use [RQ](http://python-rq.org) in your Django projects.
* [huey](https://github.com/coleifer/huey/) - A little multi-threaded task queue for python.

## Testing

*Packages that help test code or generate test data.*

* [django-behave](https://github.com/django-behave/django-behave/) - TestRunner for the Behave BDD module.
* [django-faker](https://github.com/joke2k/django-faker/) - Fake-factory to generate test data.
* [django-dynamic-fixture](https://github.com/paulocheque/django-dynamic-fixture) - A complete library to create dynamic model instances for testing purposes.
* [django-jenkins](https://github.com/kmmbvnr/django-jenkins) - Plug and play continuous integration with django and jenkins.
* [django-nose](https://github.com/django-nose/django-nose/) - Test runner using nose.
* [django-selenium](https://github.com/dragoon/django-selenium/) - Selenium testing support.
* [django-slowtests](https://github.com/realpython/django-discover-slowest-tests-runner/) - Locate your slowest tests.
* [factory_boy](https://github.com/rbarrois/factory_boy/) - A test fixtures replacement for Python
* [lettuce-django-terrain](https://github.com/stringfellow/lettuce-django-terrain/) - Terrain file for lettuce in django projects
* [model-mommy](https://github.com/vandersonmota/model_mommy/) - Smart fixtures for better tests.
* [pytest-django](https://pypi.python.org/pypi/pytest-django/) - Test runner using py.test
* [splinter](https://github.com/cobrateam/splinter/) - Test framework for web applications.

## Thumbnail

*Packages that help generate thumbnails.*

* [django-stdimage](https://github.com/codingjoe/django-stdimage/) - Thumbnails and image utils for Django.
* [easy-thumbnails](https://github.com/SmileyChris/easy-thumbnails) - Easy thumbnails for Django.
* [sorl-thumbnail](https://github.com/mariocesar/sorl-thumbnail/) - Thumbnails for Django.

## Translations

*Packages help with the task of translating projects.*

* [django-klingon](https://github.com/RouteAtlas/django-klingon/) - An attempt to make django model translations suckless and with no integrations pain in your app.
* [django-hvad](https://github.com/KristianOellegaard/django-hvad) - Painless translations in django, using the regular ORM. Integrates easily into existing projects and apps. Easy convertible from django-multilingual-ng.
* [django-modeltranslation](https://github.com/deschler/django-modeltranslation/) - Translate dynamic content of existing Django models to an arbitrary number of languages without having to change the original model classes.
* [django-parler](https://github.com/edoburu/django-parler) - Simple Django model translations without nasty hacks
* [django-rosetta](https://github.com/mbi/django-rosetta/) - Rosetta is a Django application that eases the translation process of your Django projects.

## Views

*Packages that enhance or provide new view classes.*

* [django-extra-views](https://github.com/AndrewIngram/django-extra-views/) - Django's class-based generic views are awesome, let's have more of them.

## Web frontend integration

* [django-angular](https://github.com/jrief/django-angular/) - Let AngularJS play well with Django.
* [django-js-reverse](https://github.com/ierror/django-js-reverse) - Javascript url handling for Django that doesn't hurt.
* [djangular](https://github.com/appliedsec/djangular/) - A reusable Django app that provides better integration and tools for Angular.js.

## WYSIWYG Editors

*Packages that makes text editing awesome.*

* [django-ckeditor](https://github.com/django-ckeditor/django-ckeditor/) - Django admin CKEditor integration.
* [django-summernote](https://github.com/summernote/django-summernote/) - Summernote is a simple WYSIWYG editor. django-summernote allows you to embed Summernote into Django very handy. Support admin mixins and widgets.
* [django-tinymce](https://github.com/aljosa/django-tinymce/) - TinyMCE integration for Django.
* [django-wysiwyg](https://github.com/pydanny/django-wysiwyg/) - A Django application for making Django textareas rich text editors. Certainly as a template tag and possibly as a form widget.
* [django-wysiwyg-redactor](https://github.com/douglasmiranda/django-wysiwyg-redactor/) - A lightweight wysiwyg editor for Django.

## Wiki apps

* [django-wiki](https://github.com/django-wiki/django-wiki) A wiki system with complex functionality for simple integration and a superb interface. Store your knowledge with style: Use django models.
* [waliki](https://github.com/mgaitan/waliki) An extensible wiki app for Django with a Git backend.

## Workflows

*Packages that do process, procedure and/or business tasks management.*

* [django-flows](https://github.com/carlio/django-flows/) - django-flows keeps state and position in complicated flows of logic, allowing optional branches and complicated paths through a series of individual user actions.
* [django-fsm](https://github.com/kmmbvnr/django-fsm/) - Django friendly finite state machine support.
* [django-states](https://github.com/vikingco/django-states2/) - State machine for django models.
* [django-viewflow](https://github.com/kmmbvnr/django-viewflow/) - Reusable workflow library for Django.
* [django-workflows](https://bitbucket.org/jerzyk/django-workflows/) - django-workflows provides a generic workflow engine for Django.
* [django-xworkflows](https://github.com/rbarrois/django_xworkflows/) - Library to plug xworkflows into django models.

## Other

* [cookiecutter](https://github.com/audreyr/cookiecutter/) - A command-line utility that creates projects from cookiecutters (project templates).
* [dj-database-url](https://github.com/kennethreitz/dj-database-url/) - Utilize the 12factor inspired DATABASE_URL environment variable to configure your Django application.
* [django-activeurl](https://github.com/hellysmile/django-activeurl) - Easy to use active URL highlighting for django
* [django-activity-stream](https://github.com/justquick/django-activity-stream/) - Generate generic activity streams from the actions on your site. Users can follow any actors' activities for personalized streams.
* [django-adminactions](https://github.com/saxix/django-adminactions/) - Collection of useful actions to use with django.contrib.admin.ModelAdmin and/or django.contrib.admin.AdminSite
* [django-autoadmin](https://github.com/rosarior/django-autoadmin/) - Automatic admin users for Django projects.
* [django-braces](https://github.com/brack3t/django-braces/) - Reusable, generic mixins for Django.
* [django-calendarium](https://github.com/bitmazk/django-calendarium/) - A reusable app to manage and display a calendar in your templates.
* [django-changuito](https://github.com/angvp/django-changuito/) - A cart app for your django site, an updated fork of django-cart
* [django-dynamic-scraper](https://github.com/holgerd77/django-dynamic-scraper/) - Creating Scrapy scrapers via the Django admin interface.
* [django-extensions](https://github.com/django-extensions/django-extensions/) - This is a repository for collecting global custom management extensions for the Django Framework.
* [django-filter](https://github.com/alex/django-filter/) - A generic system for filtering Django QuerySets based on user selections.
* [django-friendship](https://github.com/revsys/django-friendship/) - Django app to manage following and bi-directional friendships.
* [django-gravatar2](https://github.com/twaddington/django-gravatar/) - Essential Gravatar support for Django. Features helper methods, templatetags and a full test suite!
* [django-magic-embed](https://github.com/fitoria/django-magicembed/) - an easy and simple Django template tag and tool to embed video and get thumbnails from video providers.
* [django-markitup](https://bitbucket.org/carljm/django-markitup/src/) - A Django reusable application for end-to-end markup handling.
* [django-pagination](https://github.com/ericflo/django-pagination) - https://github.com/ericflo/django-pagination.
* [django-quiz-app](https://github.com/tomwalker/django_quiz/) - This is a configurable quiz app for Django.
* [django-recaptcha](https://github.com/praekelt/django-recaptcha/) - Django reCAPTCHA form field/widget integration app.
* [django-smuggler](https://github.com/semente/django-smuggler/) - Django Smuggler is a pluggable application for Django Web Framework that helps you to import/export fixtures via the automatically-generated administration interface.
* [django-solo](https://github.com/lazybird/django-solo/) - Helps working with singletons - things like global settings that you want to edit from the admin site.
* [django-sql-explorer](https://github.com/epantry/django-sql-explorer/) - Easily share data via SQL queries, right from Django
* [django-ratelimit](https://github.com/jsocol/django-ratelimit/) - provides a decorator to rate-limit views. Limiting can be based on IP address or a field in the request--either a GET or POST variable.
* [django-uuslug](https://github.com/un33k/django-uuslug/) - a slugify application that guarantees Uniqueness and handles Unicode.
* [django-watchman](https://github.com/mwarkentin/django-watchman/) - django-watchman exposes a status endpoint for your backing services like databases, caches, etc.
* [metamon](http://tryolabs.github.io/metamon/) - Collection of Ansible playbooks to quickly start your Django Application
* [micawber](https://github.com/coleifer/micawber/) - A small library for extracting rich content from urls.
* [towel](https://github.com/matthiask/towel/) - a collection of tools which make your life easier if you are building a web application using Django.
* [django-hackathon-starter](https://github.com/DrkSephy/django-hackathon-starter) - A boilerplate for Django web applications, containing various social authentication methods and several popular API examples.

# Projects

*Outstanding Django projects.*

## CMS

* [django-cms](https://github.com/divio/django-cms/) - The easy-to-use and developer-friendly CMS.
* [django-fiber](https://github.com/ridethepony/django-fiber) - Django Fiber, a simple, user-friendly CMS for all your Django projects
* [feincms](https://github.com/feincms/feincms/) - A Django-based CMS with a focus on extensibility and concise code.
* [mezzanine](https://github.com/stephenmcd/mezzanine/) - A content management platform built using the Django framework.
* [wagtail](https://github.com/torchbox/wagtail/) - A new Django content management system.

## Document Management

* [mayan-edms](https://github.com/mayan-edms/mayan-edms/) - Open source, Django based DMS (document management system) with custom metadata indexing, file serving integration, OCR capabilities, document versioning and electronic signature verification.

## e-Commerce

* [Satchmo](https://bitbucket.org/chris1610/satchmo/src/) - Satchmo is an eCommerce framework created in Django which allows you to develop unique and robust online stores.
* [django-oscar](https://github.com/tangentlabs/django-oscar/) - Domain-driven e-commerce for Django.

## Other

* [Django packages](https://github.com/pydanny/djangopackages/) - Django Packages is a directory of reusable apps, sites, tools, and more for your Django projects.
* [django-salted](https://github.com/wunki/django-salted/) - Full stack SaltStack configuration for Django with the help of Vagrant.

## Project Management

* [ITSY](https://github.com/orges/itsy/) - Issue Tracking System
* [taiga](https://github.com/taigaio/taiga-back) - Agile, Free and Open Source Project Management Tool

# Resources

Where to discover new Django apps and projects.

## Books

* [Two Scoops of Django: Best Practices for Django 1.11](https://www.twoscoopspress.com/products/two-scoops-of-django-1-11) - A best practice book for making Python and Django as fun as ice cream.
* [High Performance Django](https://highperformancedjango.com/) (1.7) - Deploying fast, scalable Django sites.
* [Lightweight Django](http://shop.oreilly.com/product/0636920032502.do) (1.7) - Using REST, WebSockets, and Backbone with Django
* [Test-Driven Web Development with Python](http://chimera.labs.oreilly.com/books/1234000000754/index.html) (1.7)
* [Djen of Django](http://agiliq.com/books/djenofdjango/) (< 1.7)
* [Getting started with Django](http://gettingstartedwithdjango.com/) (video)
* [Tango With Django](http://www.tangowithdjango.com/) (1.5)
* [Effective Django](http://effectivedjango.com/) (1.5)
* [Django by Example for Django 1.5](http://lightbird.net/dbe2/) (1.5)
* [Django by Example](http://www.lightbird.net/dbe/) (1.2)
* [The Django Book](https://djangobook.com/the-django-book/) (1.8)

## Websites

* [Django Official documentation](https://docs.djangoproject.com/en/1.11/) - Official documentation for Django.
* [Django Girls Tutorial](http://tutorial.djangogirls.org/) - A fun and engaging tutorial showing how to build a blog using Django and deploy it to Heroku.
* [Django Introduction](http://www.django-introduction.com/) - A reusable set of slides to educate more people about Django.
* [Django Packages](https://www.djangopackages.com/) - Django Packages is a directory of reusable apps, sites, tools, and more for your Django projects.
* [Django Sites](https://www.djangosites.org) - Django Sites is a showcase of websites powered by Django.
* [Full Stack Python's Django page](http://www.fullstackpython.com/django.html) - contains explanations for Django's philosophy and its components along with links to other resources and tutorials.
* [Mastering Django: Core](http://masteringdjango.com/django-book/) - teaches core django,also AKA
as the NEW DJANGO BOOK.


## Conferences

* [Django Beer](http://www.djangobeer.com/) - the new meeting of the Django community of Florence.
* [Django Village](http://djangovillage.it/) - the Italian Django community conference. An opportunity to meet djangonauts from all over Italy and abroad.
* [Django Weekend](http://djangoweekend.org/) - is a Django/Python non-profit community event, organised and run entirely by volunteers. The conference is Django-focused, but all aspects of Python fall within its remit.
* [Django: Under The Hood](http://www.djangounderthehood.com/) - is an exciting new Django conference for experienced Django developers. Come and learn about the internals of Django, and help to shape its future.
* [DjangoCon Europe](http://www.djangocon.eu/) - is the annual largest European-based Django conference that is usually held in late spring.
* [DjangoCon US](http://www.djangocon.us/) - is the largest North American Django conference generally held the first week in September each year.

## Videos

* [Must Watch Django Videos](https://gitlab.com/rosarior/django-must-watch) - Must-watch videos about Django (or about Python as applied to Django)
* [GoDjango](https://godjango.com) - Django videos from basics to advanced. Covering 3rd party apps to core Django compontents.

# Utilities

*Non Django projects that make it easier to work with Django*

* [Django-manage.py-anywhere](https://github.com/timonweb/Django-manage.py-anywhere/) - Run manage.py commands from anywhere. Finds closest to current path manage.py file and runs commands against it.
