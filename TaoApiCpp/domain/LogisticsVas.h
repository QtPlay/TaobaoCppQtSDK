#ifndef LOGISTICSVAS_H
#define LOGISTICSVAS_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 货运增值服务信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsVas : public TaoDomain
{

public:
 virtual ~LogisticsVas() { }

  QString getChargeCalculateType() const;
  void setChargeCalculateType (QString chargeCalculateType);
  QString getComments() const;
  void setComments (QString comments);
  bool getDefaultSelected() const;
  void setDefaultSelected (bool defaultSelected);
  bool getDisplayable() const;
  void setDisplayable (bool displayable);
  bool getNeeded() const;
  void setNeeded (bool needed);
  bool getValueDisplayable() const;
  void setValueDisplayable (bool valueDisplayable);
  QString getVasCode() const;
  void setVasCode (QString vasCode);
  QString getVasName() const;
  void setVasName (QString vasName);
  
  virtual void parseResponse();

private:
/**
 * @brief 计费类型。0：计费；1：面议；2：免费
 **/
  QString chargeCalculateType;

/**
 * @brief 增值服务的描述
 **/
  QString comments;

/**
 * @brief 默认是否选中
 **/
  bool defaultSelected;

/**
 * @brief 是否需要展示
 **/
  bool displayable;

/**
 * @brief 是否必选
 **/
  bool needed;

/**
 * @brief 是否需要输入框，输入相应的金额。如报价金额。
 **/
  bool valueDisplayable;

/**
 * @brief 增值服务的code
 **/
  QString vasCode;

/**
 * @brief 增值服务名
 **/
  QString vasName;

};

#endif  /* LOGISTICSVAS_H */
