#ifndef SKUSQUANTITYUPDATERESPONSE_H
#define SKUSQUANTITYUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 提供按照全量/增量的方式批量修改SKU库存的功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SkusQuantityUpdateResponse : public TaoResponse
{
public:
 virtual ~SkusQuantityUpdateResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief iid、numIid、num和modified，skus中每个sku的skuId、quantity和modified
 **/
  Item item;

};

#endif
