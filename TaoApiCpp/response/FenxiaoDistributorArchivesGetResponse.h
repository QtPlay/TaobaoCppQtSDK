#ifndef FENXIAODISTRIBUTORARCHIVESGETRESPONSE_H
#define FENXIAODISTRIBUTORARCHIVESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/DistributorArchive.h>


/**
 * @brief TOP RESPONSE API: 获取当前供应商授权分销商的产品的下载率，计算逻辑同后台页面。downLoadRatio 
获取当前供应商授权分销商的产品的上架率，计算逻辑同后台页面。获取upSelfRatio 
获取当前供应商在分销商店铺中的上架商品占比。upShopRatio 
获取当前供应商在分销商店铺中的成交（已付款）订单笔数占比。 orderShopRatio 
获取当前供应商在分销商店铺中铺货商品UV占店铺商品总UV的比。uvShopRatio
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorArchivesGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDistributorArchivesGetResponse() { }

  DistributorArchive getDistributorArchive() const;
  void setDistributorArchive (DistributorArchive distributorArchive);  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 分销商档案
 **/
  DistributorArchive distributorArchive;

/**
 * @brief 接口执行结果，true表示执行成功；false表示执行失败。
 **/
  bool isSuccess;

};

#endif
