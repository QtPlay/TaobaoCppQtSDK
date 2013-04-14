#ifndef SCITEMMAPQUERYRESPONSE_H
#define SCITEMMAPQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ScItemMap.h>


/**
 * @brief TOP RESPONSE API: 查找IC商品或分销商品与后端商品的关联信息。skuId如果不传就查找该itemId下所有的sku
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemMapQueryResponse : public TaoResponse
{
public:
 virtual ~ScitemMapQueryResponse() { }

  QList<ScItemMap> getScItemMaps() const;
  void setScItemMaps (QList<ScItemMap> scItemMaps);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 后端商品映射列表
 **/
  QList<ScItemMap> scItemMaps;

};

#endif
