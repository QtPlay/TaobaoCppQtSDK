#ifndef LOTTERYWANGCAIPRESENT_H
#define LOTTERYWANGCAIPRESENT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 旺彩赠送DO
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LotteryWangcaiPresent : public TaoDomain
{

public:
 virtual ~LotteryWangcaiPresent() { }

  QString getAppName() const;
  void setAppName (QString appName);
  QString getLotteryName() const;
  void setLotteryName (QString lotteryName);
  QDateTime getPresentDate() const;
  void setPresentDate (QDateTime presentDate);
  qlonglong getStakeCount() const;
  void setStakeCount (qlonglong stakeCount);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  qlonglong getWinFee() const;
  void setWinFee (qlonglong winFee);
  
  virtual void parseResponse();

private:
/**
 * @brief isv应用的名称
 **/
  QString appName;

/**
 * @brief 彩种名称
 **/
  QString lotteryName;

/**
 * @brief 赠送时间
 **/
  QDateTime presentDate;

/**
 * @brief 彩票注数
 **/
  qlonglong stakeCount;

/**
 * @brief 用户昵称
 **/
  QString userNick;

/**
 * @brief 中奖金额，以分为单位
 **/
  qlonglong winFee;

};

#endif  /* LOTTERYWANGCAIPRESENT_H */
