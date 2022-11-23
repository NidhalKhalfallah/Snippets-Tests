#define a function to parse an xml string
def parse_xml(xml_string):
    """Parse an xml string and return a dict of the data"""
    # parse the xml string into an element tree object
    root = ET.fromstring(xml_string)

    # create a dictionary to store the data in
    parsed_data = {}

    # get all child elements of the root node, which is <root> in this case
    children = root.getchildren()

    # iterate through each child node and extract its tag name and value as a tuple pair 
     for child in children: 
        tag_name = child.tag 

        if tag_name == "title": 
            title = child.text  

            parsed_data["title"]= title  

        elif tag_name == "link": 
            link = child.attrib['href']  

            parsed_data["link"]= link  

        elif tag_name == "description": 
            description = child.text  

            parsed_data["description"]= description  

        elif tag_name == "pubDate": 
            pubdate = dateutil.parser.parse(child.text)  

            parsed_data["pubdate"]= pubdate
