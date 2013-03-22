<?php
/**
 * @file
 * vih_ef_members.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vih_ef_members_taxonomy_default_vocabularies() {
  return array(
    'year' => array(
      'name' => 'Årgang',
      'machine_name' => 'year',
      'description' => 'Bruges til at angive hvilken årgang brugerne har været på.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
