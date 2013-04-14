#ifndef CAIPIAOGOODSINFOGETRESPONSE_H
#define CAIPIAOGOODSINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LotteryWangcaiSellerGoodsInfo.h>


/**
 * @brief TOP RESPONSE API: 根据卖家id与appkey获取商品信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoGoodsInfoGetResponse : public TaoResponse
{
public:
 virtual ~CaipiaoGoodsInfoGetResponse() { }

  QList<LotteryWangcaiSellerGoodsInfo> getResults() const;
  void setResults (QList<LotteryWangcaiSellerGoodsInfo> results);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 查询的结果列表
 **/
  QList<LotteryWangcaiSellerGoodsInfo> results;

/**
 * @brief 返回列表的大小
 **/
  qlonglong totalResults;

};

#endif
