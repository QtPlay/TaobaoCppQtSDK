#ifndef ITEMQUANTITYUPDATERESPONSE_H
#define ITEMQUANTITYUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 提供按照全量或增量形式修改宝贝/SKU库存的功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemQuantityUpdateResponse : public TaoResponse
{
public:
 virtual ~ItemQuantityUpdateResponse() { }

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
