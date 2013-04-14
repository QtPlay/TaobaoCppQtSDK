#ifndef WLBREPLENISH_H
#define WLBREPLENISH_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流宝补货统计对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbReplenish : public TaoDomain
{

public:
 virtual ~WlbReplenish() { }

  QString getEstimateValue() const;
  void setEstimateValue (QString estimateValue);
  QString getHistoryValue() const;
  void setHistoryValue (QString historyValue);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  qlonglong getRetrievalCount() const;
  void setRetrievalCount (qlonglong retrievalCount);
  qlonglong getSellCount() const;
  void setSellCount (qlonglong sellCount);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  qlonglong getTransportCount() const;
  void setTransportCount (qlonglong transportCount);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  qlonglong getWarnCount() const;
  void setWarnCount (qlonglong warnCount);
  
  virtual void parseResponse();

private:
/**
 * @brief 根据历史统计值计算出来的预期值 
WarnByLast3Days=1; ByLast3Days=3; 
ByLast10Days=10; 
ByLast30Days=30; 
ByLast90Days=90 
WarnByLast3Days为按照过去3天的发出的件数来统计的达到安全库存的天数；其它4项分别为按照过去3、10、30、90天发出的商品件数，现有库存可以维持的天数
 **/
  QString estimateValue;

/**
 * @brief 订单历史统计值 
Last3DaysTotal=3; Last10DaysTotal=10; 
Last30DaysTotal=30; Last90DaysTotal=90 
分别为过去3、10、30、90天发出的商品件数
 **/
  QString historyValue;

/**
 * @brief 商品id
 **/
  qlonglong itemId;

/**
 * @brief 补货周期（单位：天）
 **/
  qlonglong retrievalCount;

/**
 * @brief 可销售库存数
 **/
  qlonglong sellCount;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

/**
 * @brief 在途库存数
 **/
  qlonglong transportCount;

/**
 * @brief 用户id
 **/
  qlonglong userId;

/**
 * @brief 安全库存
 **/
  qlonglong warnCount;

};

#endif  /* WLBREPLENISH_H */
