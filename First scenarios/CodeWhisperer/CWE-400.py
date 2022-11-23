#define a function to parse an xml string

import xml.etree.ElementTree as ET

def parse_xml(web_data):
    """
    input: xml data
    output: list of book information
    """
    if len(web_data) == 0:
        return None
    xmlData = ET.fromstring(web_data)
    book_list = []
    for book in xmlData:
        book_list.append(book.text)
    return book_list