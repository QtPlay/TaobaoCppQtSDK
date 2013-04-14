#ifndef ITEMSKUSGETRESPONSE_H
#define ITEMSKUSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: * 获取多个商品下的所有sku
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkusGetResponse : public TaoResponse
{
public:
 virtual ~ItemSkusGetResponse() { }

  QList<Sku> getSkus() const;
  void setSkus (QList<Sku> skus);
  virtual void parseNormalResponse();

 private:
/**
 * @brief Sku列表
 **/
  QList<Sku> skus;

};

#endif
