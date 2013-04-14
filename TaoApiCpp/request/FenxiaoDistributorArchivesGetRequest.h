#ifndef FENXIAODISTRIBUTORARCHIVESGETREQUEST_H
#define FENXIAODISTRIBUTORARCHIVESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDistributorArchivesGetResponse.h>

/**
 * TOP API: 获取当前供应商授权分销商的产品的下载率，计算逻辑同后台页面。downLoadRatio 
获取当前供应商授权分销商的产品的上架率，计算逻辑同后台页面。获取upSelfRatio 
获取当前供应商在分销商店铺中的上架商品占比。upShopRatio 
获取当前供应商在分销商店铺中的成交（已付款）订单笔数占比。 orderShopRatio 
获取当前供应商在分销商店铺中铺货商品UV占店铺商品总UV的比。uvShopRatio
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorArchivesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDistributorUserNick() const
;  void setDistributorUserNick (QString distributorUserNick);


  virtual FenxiaoDistributorArchivesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销商淘宝店主nick
 **/
  QString distributorUserNick;

};

#endif  /* FENXIAODISTRIBUTORARCHIVESGETREQUEST_H */
