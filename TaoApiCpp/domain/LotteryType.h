#ifndef LOTTERYTYPE_H
#define LOTTERYTYPE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 淘宝彩票彩种信息描述
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LotteryType : public TaoDomain
{

public:
 virtual ~LotteryType() { }

  qlonglong getId() const;
  void setId (qlonglong id);
  QString getName() const;
  void setName (QString name);
  
  virtual void parseResponse();

private:
/**
 * @brief 彩种ID
 **/
  qlonglong id;

/**
 * @brief 彩种名称
 **/
  QString name;

};

#endif  /* LOTTERYTYPE_H */
