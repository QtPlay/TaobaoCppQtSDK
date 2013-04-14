#ifndef ROUTEEXTENALINFO_H
#define ROUTEEXTENALINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>


/**
 * @brief 线路附加信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RouteExtenalInfo : public TaoDomain
{

public:
 virtual ~RouteExtenalInfo() { }

  bool getCod() const;
  void setCod (bool cod);
  bool getCreditOpened() const;
  void setCreditOpened (bool creditOpened);
  QString getCreditTotalBalance() const;
  void setCreditTotalBalance (QString creditTotalBalance);
  bool getRecommend() const;
  void setRecommend (bool recommend);
  QList<QString> getSpecialCodes() const;
  void setSpecialCodes (QList<QString> specialCodes);
  bool getTop() const;
  void setTop (bool top);
  
  virtual void parseResponse();

private:
/**
 * @brief 线路是否支持代收货款
 **/
  bool cod;

/**
 * @brief 是否缴纳保证金
 **/
  bool creditOpened;

/**
 * @brief 缴纳保证金额
 **/
  QString creditTotalBalance;

/**
 * @brief 线路为推荐线路
 **/
  bool recommend;

/**
 * @brief 支持的保障服务类型列表。JGZS：价格真实；SXBZ：时效保障；KSSL：快速手里。
 **/
  QList<QString> specialCodes;

/**
 * @brief 是否置顶
 **/
  bool top;

};

#endif  /* ROUTEEXTENALINFO_H */
