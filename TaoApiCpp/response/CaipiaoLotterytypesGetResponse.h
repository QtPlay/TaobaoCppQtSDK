#ifndef CAIPIAOLOTTERYTYPESGETRESPONSE_H
#define CAIPIAOLOTTERYTYPESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LotteryType.h>


/**
 * @brief TOP RESPONSE API: 获取彩票系统支持的可用于赠送的彩种列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoLotterytypesGetResponse : public TaoResponse
{
public:
 virtual ~CaipiaoLotterytypesGetResponse() { }

  QList<LotteryType> getResults() const;
  void setResults (QList<LotteryType> results);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 彩种的数据结构
 **/
  QList<LotteryType> results;

/**
 * @brief 彩种个数
 **/
  qlonglong totalResults;

};

#endif
