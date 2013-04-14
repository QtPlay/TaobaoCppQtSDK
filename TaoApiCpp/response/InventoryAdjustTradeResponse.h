#ifndef INVENTORYADJUSTTRADERESPONSE_H
#define INVENTORYADJUSTTRADERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家交易调整库存，淘宝交易、B2B经销等
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAdjustTradeResponse : public TaoResponse
{
public:
 virtual ~InventoryAdjustTradeResponse() { }

  QString getOperateCode() const;
  void setOperateCode (QString operateCode);  QList<TipInfo> getTipInfos() const;
  void setTipInfos (QList<TipInfo> tipInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作返回码
 **/
  QString operateCode;

/**
 * @brief 提示信息
 **/
  QList<TipInfo> tipInfos;

};

#endif
