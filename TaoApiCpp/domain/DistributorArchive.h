#ifndef DISTRIBUTORARCHIVE_H
#define DISTRIBUTORARCHIVE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 分销商档案信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DistributorArchive : public TaoDomain
{

public:
 virtual ~DistributorArchive() { }

  QString getDownLoadRatio() const;
  void setDownLoadRatio (QString downLoadRatio);
  QString getOrderShopRatio() const;
  void setOrderShopRatio (QString orderShopRatio);
  QString getUpSelfRatio() const;
  void setUpSelfRatio (QString upSelfRatio);
  QString getUpShopRatio() const;
  void setUpShopRatio (QString upShopRatio);
  QString getUvShopRatio() const;
  void setUvShopRatio (QString uvShopRatio);
  
  virtual void parseResponse();

private:
/**
 * @brief 供应商授权分销商的产品的下载率。 
率的值都是*10000后的，取值后直接除以100后加上%即可。比如12.33%，返回值是1233。
 **/
  QString downLoadRatio;

/**
 * @brief 供应商在分销商店铺中的成交（已付款）订单笔数占比。 
率的值都是*10000后的，取值后直接除以100后加上%即可。比如12.33%，返回值是1233。
 **/
  QString orderShopRatio;

/**
 * @brief 供应商授权分销商的产品的上架率。 
率的值都是*10000后的，取值后直接除以100后加上%即可。比如12.33%，返回值是1233。
 **/
  QString upSelfRatio;

/**
 * @brief 供应商在分销商店铺中的上架商品占比。 
率的值都是*10000后的，取值后直接除以100后加上%即可。比如12.33%，返回值是1233。
 **/
  QString upShopRatio;

/**
 * @brief 供应商在分销商店铺中铺货商品UV占店铺商品总UV的比。 
率的值都是*10000后的，取值后直接除以100后加上%即可。比如12.33%，返回值是1233。
 **/
  QString uvShopRatio;

};

#endif  /* DISTRIBUTORARCHIVE_H */
