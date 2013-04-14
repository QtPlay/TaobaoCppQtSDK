#ifndef INVENTORYINITIALITEMRESPONSE_H
#define INVENTORYINITIALITEMRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家仓商品初始化在各个仓中库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryInitialItemResponse : public TaoResponse
{
public:
 virtual ~InventoryInitialItemResponse() { }

  QList<TipInfo> getTipInfos() const;
  void setTipInfos (QList<TipInfo> tipInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 提示信息
 **/
  QList<TipInfo> tipInfos;

};

#endif
