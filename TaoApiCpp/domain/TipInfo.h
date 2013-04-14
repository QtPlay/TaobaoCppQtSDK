#ifndef TIPINFO_H
#define TIPINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 提示信息对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TipInfo : public TaoDomain
{

public:
 virtual ~TipInfo() { }

  QString getInfo() const;
  void setInfo (QString info);
  QString getScItemId() const;
  void setScItemId (QString scItemId);
  
  virtual void parseResponse();

private:
/**
 * @brief 提示信息
 **/
  QString info;

/**
 * @brief 后端商品ID或者商家编码
 **/
  QString scItemId;

};

#endif  /* TIPINFO_H */
