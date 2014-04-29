Drupal Recruit offers basic job and applicant tracking. Jobs are implemented using a standard content type and applications are implemented using an entity type.

Currently the application entity type comes with two fields: first and last name. However, you can add your own fields from the "Application types" page (admin/structure/application-types).

## Requirements

- [Entity API](https://drupal.org/project/entity)
- [Entity reference](https://drupal.org/project/entityreference)
- [Ctools](https://drupal.org/project/ctools)
- [Views](https://drupal.org/project/views)

## Installation

Install both recruit and recruit_application.

## How to Create a Job

It's important to understand that a job is just a content type (node) with an Application reference field.
This reference field is used to reference an application type.

By default, the module creates a content type called Job with the application reference field.

- Create a job by going to Content, "Add content" and click on Job.
- Select an application type from the Application field and you're good to go.
- Users should see an "Apply Now" link on the content page.

If you want to allow anonymous users to submit applications, then assign them the "Create applications" permission.

## Managing Applications

> Make sure you enable the recruit_application module.

- To manage application types or to create your own, go to Structure and "Application types".
- You can view all applications by going to Content, Applications.

## Maintainer

- [Ivan Zugec](https://drupal.org/user/86970)