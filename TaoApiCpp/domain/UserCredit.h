#ifndef USERCREDIT_H
#define USERCREDIT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 用户信用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserCredit : public TaoDomain
{

public:
 virtual ~UserCredit() { }

  qlonglong getGoodNum() const;
  void setGoodNum (qlonglong goodNum);
  qlonglong getLevel() const;
  void setLevel (qlonglong level);
  qlonglong getScore() const;
  void setScore (qlonglong score);
  qlonglong getTotalNum() const;
  void setTotalNum (qlonglong totalNum);
  
  virtual void parseResponse();

private:
/**
 * @brief 收到的好评总条数。取值范围:大于零的整数
 **/
  qlonglong goodNum;

/**
 * @brief 信用等级（是根据score生成的），信用等级：淘宝会员在淘宝网上的信用度，分为20个级别，级别如：level = 1 时，表示一心；level = 2 时，表示二心
 **/
  qlonglong level;

/**
 * @brief 信用总分（“好评”加一分，“中评”不加分，“差评”扣一分。分越高，等级越高）
 **/
  qlonglong score;

/**
 * @brief 收到的评价总条数。取值范围:大于零的整数
 **/
  qlonglong totalNum;

};

#endif  /* USERCREDIT_H */
