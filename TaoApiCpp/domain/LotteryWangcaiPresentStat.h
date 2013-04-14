#ifndef LOTTERYWANGCAIPRESENTSTAT_H
#define LOTTERYWANGCAIPRESENTSTAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 彩票赠送的统计数据DO
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LotteryWangcaiPresentStat : public TaoDomain
{

public:
 virtual ~LotteryWangcaiPresentStat() { }

  qlonglong getDateId() const;
  void setDateId (qlonglong dateId);
  qlonglong getPresentFee() const;
  void setPresentFee (qlonglong presentFee);
  qlonglong getPresentStake() const;
  void setPresentStake (qlonglong presentStake);
  qlonglong getPresentUser() const;
  void setPresentUser (qlonglong presentUser);
  qlonglong getSellerId() const;
  void setSellerId (qlonglong sellerId);
  
  virtual void parseResponse();

private:
/**
 * @brief 日期
 **/
  qlonglong dateId;

/**
 * @brief 当日赠送彩票的金额
 **/
  qlonglong presentFee;

/**
 * @brief 当日赠送彩票的注数
 **/
  qlonglong presentStake;

/**
 * @brief 当日赠送用户数
 **/
  qlonglong presentUser;

/**
 * @brief 送彩方的淘宝数字ID
 **/
  qlonglong sellerId;

};

#endif  /* LOTTERYWANGCAIPRESENTSTAT_H */
