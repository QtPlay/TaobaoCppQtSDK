#ifndef INVENTORYAUTHORIZEREMOVERESPONSE_H
#define INVENTORYAUTHORIZEREMOVERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 根据库存授权结果码移除该授权下的用户库存授权
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeRemoveResponse : public TaoResponse
{
public:
 virtual ~InventoryAuthorizeRemoveResponse() { }

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
