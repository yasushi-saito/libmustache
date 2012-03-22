
#include "mustache.hpp"


int mustache_version() {
  return LIBMUSTACHE_VERSION_INT;
}


namespace mustache {


void Mustache::tokenize(std::string * tmpl, Node * root)
{
  tokenizer.tokenize(tmpl, root);
}

void Mustache::render(Node * node, Data * data, Node::Partials * partials, std::string * output)
{
  renderer.init(node, data, partials, output);
  renderer.render();
}


} // namespace Mustache
