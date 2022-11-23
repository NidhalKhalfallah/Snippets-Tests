#define a function to parse an xml string
def parse_xml(xml_string):
    #parse the xml string
    xml_parsed = xmltodict.parse(xml_string)
    #return the parsed xml string
    return xml_parsed