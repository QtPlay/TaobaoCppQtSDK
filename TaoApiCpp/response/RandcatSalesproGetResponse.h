#ifndef RANDCATSALESPROGETRESPONSE_H
#define RANDCATSALESPROGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/CatBrandSaleProp.h>


/**
 * @brief TOP RESPONSE API: 获取被管控的品牌类目下销售信息，销售信息又分成两中，一种是规格属性，要求针对这个属性创建规格信息，第二种是非规格属性（一般会被称为营销属性），这种信息主要是会影响到价格的变化，在做sku的时候会使用到。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RandcatSalesproGetResponse : public TaoResponse
{
public:
 virtual ~RandcatSalesproGetResponse() { }

  QList<CatBrandSaleProp> getCatBrandSaleProps() const;
  void setCatBrandSaleProps (QList<CatBrandSaleProp> catBrandSaleProps);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取被管控品牌和类目下的销售属性，注意，一个管控品牌和类目下可能有多个销售属性。
 **/
  QList<CatBrandSaleProp> catBrandSaleProps;

};

#endif
