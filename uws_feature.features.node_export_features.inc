<?php

/**
 * @file
 * uws_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function uws_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Western Sydney University research is made searchable and accessible to the global research community via the Institutional Repository. Open access compliant records can be harvested by major search engines such as Google Scholar, increasing the visibility of research outputs. Metadata is also accessible through TROVE, hosted by the National Library of Australia. Access to the full text of the publication or output will be made available where possible.</p>\\r\\n<p>Guidelines for what may be submitted to ResearchDirect can be found <a href=\\"https://library.westernsydney.edu.au/main/uws-research-repository-guidelines\\">here<a/>.</p>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Western Sydney University research is made searchable and accessible to the global research community via the Institutional Repository. Open access compliant records can be harvested by major search engines such as Google Scholar, increasing the visibility of research outputs. Metadata is also accessible through TROVE, hosted by the National Library of Australia. Access to the full text of the publication or output will be made available where possible.<br />\\nGuidelines for what may be submitted to ResearchDirect can be found <a href=\\"https://library.westernsydney.edu.au/main/uws-research-repository-guidelines\\">here</a><a></a>.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Western Sydney University ResearchDirect\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'02dede01-6bd8-4b87-b1ab-498515384199\',
      \'vid\' => NULL,
      \'vuuid\' => \'225060b7-76fd-4e7d-89ba-dc168b606d28\',
    ),
)',
);
  return $node_export;
}
