#ifndef FENXIAODISTRIBUTORPROCUCTSTATICGETRESPONSE_H
#define FENXIAODISTRIBUTORPROCUCTSTATICGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/DistributorItemFlow.h>


/**
 * @brief TOP RESPONSE API: 获取分销商品流量，以天为单位统计分销商品的PV，UV
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorProcuctStaticGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDistributorProcuctStaticGetResponse() { }

  QList<DistributorItemFlow> getDistributorItemFlows() const;
  void setDistributorItemFlows (QList<DistributorItemFlow> distributorItemFlows);  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 分销商商品流量
 **/
  QList<DistributorItemFlow> distributorItemFlows;

/**
 * @brief 执行结果，true表示执行成功；false表示执行失败。
 **/
  bool isSuccess;

};

#endif
