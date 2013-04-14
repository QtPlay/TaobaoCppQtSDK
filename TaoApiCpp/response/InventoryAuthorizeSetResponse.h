#ifndef INVENTORYAUTHORIZESETRESPONSE_H
#define INVENTORYAUTHORIZESETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/InventoryAuthorizeInfo.h>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家向其他用户设置配额库存的共享或者独享，支持到渠道，商家自定义库存类别
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeSetResponse : public TaoResponse
{
public:
 virtual ~InventoryAuthorizeSetResponse() { }

  QList<InventoryAuthorizeInfo> getAuthorizeResults() const;
  void setAuthorizeResults (QList<InventoryAuthorizeInfo> authorizeResults);  QList<TipInfo> getTipInfos() const;
  void setTipInfos (QList<TipInfo> tipInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 授权结果
 **/
  QList<InventoryAuthorizeInfo> authorizeResults;

/**
 * @brief 提示信息
 **/
  QList<TipInfo> tipInfos;

};

#endif
